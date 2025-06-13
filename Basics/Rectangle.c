// Write a C program to find the area and perimeter of a rectangle whose length and breadth are given as input
#include <stdio.h>

int main()
{
    int length, breadth, perimeter, area;
    printf("Enter the values of length and breadth : ");
    scanf("%d %d", &length, &breadth);
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    printf("The perimeter of the rectangle is %d units and area is %d sq.units", perimeter,area);
    return 0;
}