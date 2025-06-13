#include <stdio.h>
#include <string.h>

typedef struct
{
    int roll_no;
    char name[20];
    float marks[3];
}Student;

float total(float arr[3])
{
    float sum = 0;
    for(int i = 0; i < 3; i++)
        sum += arr[i];
    return sum;
}

void get_details(Student *p)
{
    int len;
    printf("\nEnter the details of the students");
    printf("\nEnter the name of the student : ");
    getchar();
    fgets(p->name, sizeof(p->name), stdin);
    len = strlen(p->name);
    if (p->name[len - 1] == '\n')
        p->name[len - 1] = '\0';
    printf("Enter the roll number of the student : ");
    scanf("%d", &p->roll_no);
    printf("Enter the 3 marks of the student :\n");
    for(int i = 0; i < 3; i++)
        scanf("%f", &p->marks[i]);
}

void display(Student s)
{
    printf("Roll no. : %d\tName : %s\tTotal : %.2f\n", s.roll_no, s.name, total(s.marks));
}

int main()
{
    int n;
    Student s[50];
    printf("Enter the number of students : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        get_details(&s[i]);
    for(int i = 0; i < n; i++)
        display(s[i]);    
    return 0;
}