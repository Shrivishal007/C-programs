/* A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match.
Create an array of structure to hold records of 20 such cricketer and then write a program to read these records and arrange them in ascending order by average runs.
Use the qsort() standard library function */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    int match;
    int runs;
} Cricketer;

void get_details(Cricketer *c)
{
    printf("\nEnter details for Cricketer :\n");
    printf("Name of the cricketer : ");
    getchar();
    fgets(c->name, sizeof(c->name), stdin);
    c->name[strcspn(c->name, "\n")] = '\0';
    printf("Cricketer\'s age : ");
    scanf("%d", &c->age);
    printf("Number of test matches played : ");
    scanf("%d", &c->match);
    printf("Number of average runs scored : ");
    scanf("%d", &c->runs);
}

int compare(const void *a, const void *b)
{
    Cricketer *c1 = (Cricketer *)a;
    Cricketer *c2 = (Cricketer *)b;
    return c1->runs - c2->runs;
}

int main()
{
    Cricketer cricketers[20];
    for (int i = 0; i < 20; i++)
        get_details(&cricketers[i]);
    printf("\nSorted list of cricketers by average runs:\n");
    qsort(cricketers, 20, sizeof(Cricketer), compare);
    for (int i = 0; i < 20; i++)
        printf("Name: %s, Age: %d, Matches: %d, Average Runs: %d\n", cricketers[i].name, cricketers[i].age, cricketers[i].match, cricketers[i].runs);
    return 0;
}