// Write a program to find the transpose of a matrix.
// Write a program to multiply two matrices
#include <stdio.h>

int main()
{
    int a[10][10] = {0}, transpose[10][10] = {0}, rows, cols, temp;
    printf("Enter the number of rows of matrix A : ");
    scanf("%d", &rows);
    printf("Enter the number of columns of matrix A : ");
    scanf("%d", &cols);

    for(int row = 0; row < rows; row++)
        for(int col = 0; col < cols; col++)
        {
            printf("The value of A[%d][%d] : ", row, col);
            scanf("%d", &a[row][col]);
        }

    printf("The given matrix A is\n");
    for(int row = 0; row < rows; row++)
    {
        for(int col = 0; col < cols; col++)
            printf("%2d ", a[row][col]);
        printf("\n");
    }

    temp = rows;
    rows = cols;
    cols = temp;  
    for(int row = 0; row < rows; row++)
        for(int col = 0; col < cols; col++)
            transpose[row][col] = a[col][row];
    printf("The transpose matrix A is\n");

    for(int row = 0; row < rows; row++)
    {
        for(int col = 0; col < cols; col++)
            printf("%2d ", transpose[row][col]);
        printf("\n");
    }
    return 0;
}