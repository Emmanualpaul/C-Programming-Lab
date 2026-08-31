#include <stdio.h>
#include<conio.h>
void readMatrix(int a[10][10], int r, int c)
{
    int i, j;

    printf("Enter the elements of matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void addMatrix(int a[10][10], int b[10][10], int sum[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void displayMatrix(int a[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int a[10][10], b[10][10], sum[10][10];
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("\nEnter elements of first matrix:\n");
    readMatrix(a, r, c);

    printf("\nEnter elements of second matrix:\n");
    readMatrix(b, r, c);

    addMatrix(a, b, sum, r, c);

    printf("\nResultant Matrix after Addition:\n");
    displayMatrix(sum, r, c);

}
