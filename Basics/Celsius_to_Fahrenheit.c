/* Write a program to convert Celsius to Fahrenheit
        Formula: Fahrenheit = Celsius * 1.8 + 32    */
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the value in Celsius : ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("The value in Fahrenheit is %.2f", fahrenheit);
    return 0;
}
