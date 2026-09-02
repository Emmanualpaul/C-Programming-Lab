#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j,m,n;
	int a[10][10];
	int b[10][10];
	int d[10][10];
	printf("Enter the number of rows in first matrix\n");
	scanf("%d",&r);
	printf("Enter the number of coloumns in first matrix\n");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The first matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
	
	printf("Enter the number of rows in second matrix\n");
	scanf("%d",&m);
	printf("Enter the number of coloumns in second matrix\n");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The second matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
	printf("\n");
	}
	printf("sum is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			printf("%d\t",d[i][j]);
		}
	printf("\n");
	}
	
	
}
	

