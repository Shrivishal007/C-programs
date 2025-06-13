/* Write a C program with a structure called employee that holds information like employee code, name, date of joining.
Write a program to create an array of the structure and enter some data into it.
Then ask the user to enter current date.
Display the names of those employees whose tenure is 3 or more than 3 years according to the given current date. */
#include <stdio.h>
#include <string.h>

typedef struct
{
    int e_code;
    char e_name[50];
    int dd, mm, yyyy;
} Employee;

void get_data(Employee *e)
{
    printf("\nEnter details for Employee :\n");
    printf("Employee Code : ");
    scanf("%d", &e->e_code);
    printf("Employee Name : ");
    getchar();
    fgets(e->e_name, sizeof(e->e_name), stdin);
    e->e_name[strcspn(e->e_name, "\n")] = '\0';
    printf("Date of Joining (\"dd-mm-yyyy\") : ");
    scanf("%d-%d-%d", &e->dd, &e->mm, &e->yyyy);
}

int tenure(int doj_date, int doj_month, int doj_year, int curr_date, int curr_month, int curr_year)
{
    int years = curr_year - doj_year;
    if (curr_month < doj_month)
        years--;
    else if ((curr_month == doj_month) && (curr_date < doj_date))
        years--;
    return years;
}

int main()
{
    int n, Date, Month, Year, exp;
    Employee employees[50];
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        get_data(&employees[i]);
    printf("\nEnter the current date (\"dd-mm-yyyy\") : ");
    scanf("%d-%d-%d", &Date, &Month, &Year);
    printf("\nEmployees with tenure of 3 or more years :\n");
    for (int i = 0; i < n; i++)
    {
        exp  = tenure(employees[i].dd, employees[i].mm, employees[i].yyyy, Date, Month, Year);
        if (exp >= 3)
            printf("%s\n", employees[i].e_name);
    }  
    return 0;
}

