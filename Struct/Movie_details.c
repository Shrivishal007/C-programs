#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char title[50];
    int year;
    float rating;
} Movie;

void get_data(Movie *m)
{
    int len;
    printf("\nEnter details of the Movie :\n");
    printf("Movie Name : ");
    getchar();
    fgets(m->title, sizeof(m->title), stdin);
    len = strlen(m->title);
    if (m->title[len - 1] == '\n')
        m->title[len - 1] = '\0';
    printf("Year of release : ");
    scanf("%d", &m->year);
    printf("Rating(out of 10) : ");
    scanf("%f", &m->rating);
}

int compare(const void *a, const void *b)
{
    Movie *m1 = (Movie *)a;
    Movie *m2 = (Movie *)b;
    if (m1->rating < m2->rating)
        return 1;
    else if (m1->rating > m2->rating)
        return -1;
    else
        return 0;
}

void display(Movie arr[], int n)
{
    printf("Top 5 movies with highest ratings\n");
    for (int i = 0; i < n; i++)
        printf("Movie Name : %s\tYear of Release : %d\tRating : %.2f\n", arr[i].title, arr[i].year, arr[i].rating);
}

void search(Movie arr[], int n)
{
    int found = 0;
    char mov[50];
    printf("Enter the Movie name for searching : ");
    getchar();
    fgets(mov, sizeof(mov), stdin);
    mov[strcspn(mov, "\n")] = '\0';
    for (int i = 0; i < n; i++)
    {
        if(strcmp(mov, arr[i].title) == 0)
        {
            found = 1;
            printf("Match found!\n");
            printf("Movie Name : %s\tYear of Release : %d\tRating : %.2f", arr[i].title, arr[i].year, arr[i].rating);
            break;
        }
    }
    if(!found)
        printf("Movie not found!");
}

int main()
{
    int n;
    Movie movies[200];
    printf("Enter the number of movies(atleast 5) : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        get_data(&movies[i]);
    qsort(movies, n, sizeof(movies[0]), compare);
    display(movies, 5);
    search(movies, n);
    return 0;
}