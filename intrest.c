#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,r;
	float i;
	printf("enter the principle amount");
	scanf("%d",&p);
	printf("enter the number of years");
	scanf("%d",&n);
	printf("enter the rate of intrest");
	scanf("%d",&r);
	i=(p*n*r)/100;
	printf("the intrest rate is:%f",i);
}
