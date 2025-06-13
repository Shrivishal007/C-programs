#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number between 100 and 1000 : ");
    scanf("%d", &num);
    if(num >= 100 && num <= 1000)
    {
        switch(num % 10)
        {
            case 0:
                printf("The unit\'s digit is zero");
                break;
            case 1:
                printf("The unit\'s digit is one");
                break;
            case 2:
                printf("The unit\'s digit is two");
                break;
            case 3:
                printf("The unit\'s digit is three");
                break;
            case 4:
                printf("The unit\'s digit is four");
                break;
            case 5:
                printf("The unit\'s digit is five");
                break;
            case 6:
                printf("The unit\'s digit is six");
                break;
            case 7:
                printf("The unit\'s digit is seven");
                break;
            case 8:
                printf("The unit\'s digit is eight");
                break;
            case 9:
                printf("The unit\'s digit is nine");
                break;
        }
    }
    else 
        printf("Invalid Input");
    return 0;
}