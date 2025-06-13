// Function to convert Celsius to Fahrenheit and vice versa.
#include <stdio.h>

float c_to_f(float c)
{
    int f;
    f = (1.8 * c) + 32;
    return f;
}

float f_to_c(float f)
{
    int c;
    c = (5.0 / 9) * (f - 32);
    return c;
}

int main()
{
    char choice;
    float celsius, fahrenheit;
    printf("Enter input temperature type(c / f) : ");
    scanf(" %c", &choice);
    switch(choice)
    {
        case 'c':
            printf("Enter the value in Celsius : ");
            scanf("%f", &celsius);
            fahrenheit = c_to_f(celsius);
            printf("The value in Fahrenheit is %.2f", fahrenheit);
            break;
        case 'f':
            printf("Enter the value in Fahrenheit : ");
            scanf("%f", &fahrenheit);
            celsius = f_to_c(fahrenheit);
            printf("The value in Celsius is %.2f", celsius);
            break;
        default:
            printf("Invalid input");
            break;
    }
    return 0;
}