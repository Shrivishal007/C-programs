/* Write a program to find the simple and compound interest
    	Formula: Simple interest: (p*n*r) / 100 (Declare int p,n   float r,si,ci, amt)
    	Amount: p*pow((1+r/100),n)
    	Compound interest: Amount-p */
#include <stdio.h>
#include <math.h>

int main()
{
    int p, n;
    float r, si, ci, amt;
    printf("Enter Principle Amount : ");
    scanf("%d", &p);
    printf("Enter the number of years : ");
    scanf("%d", &n);
    printf("Enter the rate : ");
    scanf("%f", &r);
    si = (p * n * r) / 100;
    amt = p * pow((1 + (r / 100)), n);
    ci = amt - p;
    printf("The Simple interest is %.2f and the Compound interest is %.2f", si, ci);
    return 0;
}
