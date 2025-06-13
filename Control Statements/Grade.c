/* Write a program to calculate the grade of the student, Scan 3 assessment marks and calculate Total, Average.
•	If Average is equal to and above 90, grade is “S”.
•	If Average is between 80 and 89, grade is “A”(inclusive of both limits).
•	If Average is between 70 and 79, grade is “B” (inclusive of both limits).
•	If Average is between 60 and 69, grade is “C” (inclusive of both limits).
•	If Average is between 55 and 59, grade is “D” (inclusive of both limits).
•	If Average is between 50 and 54, grade is “E” (inclusive of both limits).
•	If Average is below 50, then the grade is “U”. */
#include <stdio.h>

int main()
{
    float mark1, mark2, mark3, total, avg;
    char grade;
    printf("Enter the first assessment mark : ");
    scanf("%f", &mark1);
    printf("Enter the second assessment mark : ");
    scanf("%f", &mark2);
    printf("Enter the third assessment mark : ");
    scanf("%f", &mark3);
    total = mark1 + mark2 + mark3;
    avg = total / 3;
    if(avg >= 90)                      grade = 'S';
    else if(avg <= 89 && avg >= 80)    grade = 'A';
    else if(avg <= 79 && avg >= 70)    grade = 'B';
    else if(avg <= 69 && avg >= 60)    grade = 'C';
    else if(avg <= 59 && avg >= 55)    grade = 'D';
    else if(avg <= 54 && avg >= 50)    grade = 'E';
    else                                grade = 'U';
    printf("The total marks is %.2f and the grade is %c", total, grade);
    return 0;
}
