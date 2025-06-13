// Write a program to add two numbers using pointers. 
#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *ptr_num1 = &num1, *ptr_num2 = &num2, *ptr_sum = &sum;
    printf("Enter the value of first number : ");
    scanf("%d", &num1);
    printf("Enter the value of second number : ");
    scanf("%d", &num2);
    *ptr_sum = *ptr_num1 + *ptr_num2;
    printf("The sum of two numbers is %d", sum);
    return 0;
}