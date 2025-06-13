#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float dis;
    printf("Enter the values of a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);
    dis = (b * b) - (4 * a * c);
    if(dis >= 0)
    {
        float x1, x2;
        x1 = (-b + sqrt(dis)) / (2 * a);
        x2 = (-b - sqrt(dis)) / (2 * a);
        printf ("The roots are %.2f and %.2f", x1, x2);
    }
    else
    {
        float x_real, x_imag;
        x_real = (-b) / (2 * a);
        x_imag = (sqrt(-dis)) / (2 * a);
        printf ("The roots are %.2f + %.2fi and %.2f - %.2fi", x_real, x_imag, x_real, x_imag);
    }
    return 0;
}