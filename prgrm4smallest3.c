#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c)
	{
		printf("a is the smallest number");
	}
	else if(b<a && b<c)
	{
	printf("b is the smallest number");
	}
    else if(c<a && c<b)
    {
    	printf("c is the smallest number");
		}
    	else
		{
		printf("3 numbers are equal");
		}
	
    	
	}

	
	

