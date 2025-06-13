// Write a program to implement a simple calculator using switch case
#include <stdio.h>

int main()
{
    int a, b;
    float c;
    char symbol;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the symbol of operation to be done (+, -, *, /, %%) : ");
    scanf(" %c", &symbol);
    printf("Enter the second number : ");
    scanf("%d", &b);
    switch(symbol)
    {
        case '+':
            printf("%d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;
        case '/':
            if(b)
            {
                c = (float)a / b;
                printf("%d / %d = %.2f", a, b, c);
            }
            else
                printf("0 cannot be a divisor");
            break;
        case '%':
            if(b)
                printf("%d %% %d = %d", a, b, a % b);
            else
                printf("0 cannot be a divisor");
            break;
        default:
            printf("Invalid operation");
            break;
    }
    return 0;
}