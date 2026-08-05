#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ao;
	printf("Arithmetic operators");
	printf("\n-------------------\n");
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	ao=a + b;
	printf("a+b=%d\n",ao);
	
	ao=a-b;
	printf("a-b=%d\n",ao);
	
	ao=a*b;
	printf("a*b=%d\n",ao);
	
	ao=a/b;
	printf("a/b=%d\n",ao);
	
	ao=a%b;
	printf("a%%b=%d\n",ao);
}
