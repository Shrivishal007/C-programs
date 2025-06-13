// Write a C program to convert the seconds to its equivalent hours:minutes:seconds
#include <stdio.h>

int main()
{
    int seconds, hh, mm, ss;
    printf("Enter the total number of seconds : ");
    scanf("%d", &seconds);
    hh = seconds / 3600;
    ss = seconds % 60;
    mm = (seconds % 3600) / 60;
    printf("The correct form is %02d:%02d:%02d", hh, mm, ss);
    return 0;
}