// Write a program to multiply two matrices
#include <stdio.h>

void get_matrix(int a[10][10], int row, int col)
{
    for(int r = 0; r < row; r++)
        for(int c = 0; c < col; c++)
        {
            printf("The value of M[%d][%d] : ", r, c);
            scanf("%d", &a[r][c]);
        }
}

void display_matrix(int a[10][10], int row, int col)
{
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < col; c++)
            printf("%5d ", a[r][c]);
        printf("\n");
    }
}

int main()
{
    int a[10][10] , b[10][10], c[10][10], row1, col1, row2, col2;
    printf("Enter the order of matrix A in the form \"row * col\" : ");
    scanf("%d * %d", &row1, &col1);     
    printf("Enter the order of matrix B in the form \"row * col\" : ");
    scanf("%d * %d", &row2, &col2);

    printf("Enter the values of Matrix A :\n");
    get_matrix(a, row1, col1);
    printf("Enter the values of Matrix B :\n");
    get_matrix(b, row2, col2);

    printf("The given matrix A is\n");
    display_matrix(a, row1, col1);
    printf("The given matrix B is\n");
    display_matrix(b, row2, col2);
    
    if(col1 == row2)
    {   
        for(int row = 0; row < row1; row++)
            for(int col = 0; col < col2; col++)
            {
                c[row][col] = 0;
                for(int k = 0; k < col1; k++)      
                    c[row][col] += a[row][k] * b[k][col];
            }
        printf("The matrix multiplication A * B is \n");
        display_matrix(c, row1, col2);
    }
    else
        printf("Invalid for this operation");
    return 0;
}