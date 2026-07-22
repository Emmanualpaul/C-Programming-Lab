#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,peri,area;
	printf("enter the length and breadth\n");
	scanf("%d%d",&l,&b);
	peri=2*(l+b);
	printf("perimeter of the rectangle is%d\n",peri);
	area=l*b;
	printf("area of the rectangle is %d\n",area);
	
}
