/* Write a program to calculate the electricity bill using if else statement.
If a unit consumed is below 100, cost per unit is Rs.  2.50.
If unit consumed is between 100 to 250 cost per unit is Rs. 4.00.
If unit consumed is above 250 cost per unit is Rs 5.00 */
#include <stdio.h>

int main()
{
    int unit;
    float cost;
    printf("Enter the units consumed : ");
    scanf("%d", &unit);
    if(unit < 100)
        cost = unit * 2.5;
    else if(unit <= 250 && unit >= 100)
        cost = unit * 4;
    else
        cost = unit * 5;
    printf("Electricity bill : %.2f", cost);
    return 0;
}
