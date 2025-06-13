/* Write a program that repeatedly asks the user to input a negative or positive number. 
Print how many of the numbers are positive and how many of the negative. 
When the value zero(0) is entered , the program should terminate. */
#include <stdio.h>

int main()
{
    int n = 1, positive_count = 0, negative_count = 0;
    while(n)
    {
        printf("Enter a number (0 to stop) : ");
        scanf("%d", &n);
        if(n > 0)   
            positive_count++;
        else if(n < 0)  
            negative_count++;
    }  
    printf("The number of positive numbers is %d and negative numbers is %d", positive_count, negative_count);
    return 0;
}