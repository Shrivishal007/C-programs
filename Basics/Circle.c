/* Write a program to find the area of circle. Include <math.h> for pow function
        Formula: Area of Circle = 3.14 * pow(r,2)   */
#include <stdio.h>
#include <math.h>

int main()
{
    int radius; 
    float area;
    printf("Enter the radius of the circle : ");
    scanf("%d", &radius);
    area = 3.14 * pow(radius, 2);
    printf("The area of the circle is %.2f sq.units", area);
    return 0;
}