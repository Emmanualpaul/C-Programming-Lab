#include<stdio.h>
#include<conio.h>
void change(int *x)
{
	*x=20;
	printf("the value of in the function :%d\n",*x);//address is printed
}
void main()
{
	int a=10;
	printf("the value before calling:%d\n",a);//
	change(&a);
	printf("the value after calling:%d\n",a);
}
