#include<stdio.h>
#include<conio.h>
void main()
{
	int A[10][10];
	int r=2;
	int c=2;
	int i,j;
	printf("Enter the elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",A[i][j]);
			
		}
	printf("\n");
	}
}
