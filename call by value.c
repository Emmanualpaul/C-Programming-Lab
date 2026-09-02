#include<stdio.h>
#include<conio.h>
void change(int x)
{
	printf("the value of x inside function:%d\n",x);//the value of a is displayed
	x=20;
	printf("The value of x inside function:%d\n",x);//the assigned value 20 is displayed
}
void main()
{
	int a=10;
	printf("the value of a before function call:%d\n",a);
	change(a);//a is passed to the function
	printf("the value of a after function call:%d\n",a);//here the value does not change
}
