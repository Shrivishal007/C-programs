#include <stdio.h>

int main()
{
    int num, duplicate, position = 0, a[50] = {0}, b[50];
    printf("Enter the number of elements in the array : ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < num; i++)
    {   
        int duplicate_found = 0;
        for(int j = i + 1; j < num; j++)
        {
            if(a[i] == a[j])    
            {
                duplicate = a[i];
                duplicate_found = 1;
                break;
            }
        }
        if(duplicate_found)   break;
    }
    for(int i = 0; i < num; i++)
        if(a[i] == duplicate)   
            b[position++] = i;
    printf("The repeated number is %d and it is repeated %d times at positions ", duplicate, position);
    for(int i = 0; i < position; i++)
        printf("%d ", b[i]);
    return 0;
}