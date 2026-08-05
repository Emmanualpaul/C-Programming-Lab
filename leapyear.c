//leap year
#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter the Year");
	scanf("%d",&year);
	(year%4==0)?
		(year%100!=0)?
		printf("the year is leap year %d",year)
		:
		(year%400==0)?
			printf("The year is Leap year %d",year)
			:
			printf("The year is not a leap year%d",year)
		:
		printf("The year is not a leap year %d",year);
}
