#include <stdio.h>

int main()
{
    int a, b, c;
    char choice;
    printf("Enter for side or angle for triangle (s/a) : ");
    scanf(" %c", &choice);
    switch(choice)
    {
        case 's':
            printf("Enter the three sides : ");
            scanf("%d %d %d", &a, &b, &c);
            if(a + b > c && a + c > b && b + c > a)
            {
                printf("It is a valid Triangle");
                if(a == b && a == c)                   printf("\nIt is an equilateral triangle");
                else if(a == b || a == c || b == c)    printf("\nIt is an isosceles triangle");
                else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)    printf("\nIt is a right angled triangle");
                else                                   printf("\nIt is a scalene triangle");
            }
            else    printf("It is not a valid Triangle");
            break;
        case 'a':
            printf("Enter the angles : ");
            scanf("%d %d %d", &a, &b, &c);
            if(a + b + c == 180)
            {
                printf("It is a valid Triangle");
                if(a == b && a == c)                      printf("\nIt is an equilateral triangle");
                else if((a == b || a == c || b == c) && (a == 90 || b == 90 || c == 90))    printf("\nIt is a right angled isosceles triangle");
                else if(a == b || a == c || b == c)       printf("\nIt is an isosceles triangle");
                else if(a == 90 || b == 90 || c == 90)    printf("\nIt is a right angled triangle");
                else if(a < 90 && b < 90 && c < 90)       printf("\nIt is an acute angle triangle");
                else if(a > 90 || b > 90 || c > 90)       printf("\nIt is an obtuse angle triangle");
            }
            else    printf("It is not a valid Triangle");
            break;
        default:
            printf("Invalid Input");
            break;
    }
    return 0;
}