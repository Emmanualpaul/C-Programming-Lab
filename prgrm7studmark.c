#include<stdio.h>
#include<conio.h>
void main()
{
	int roll,m1,m2,m3;
	float avg;
	char name[20];
	printf("Enter thr roll number of the student\n");
	scanf("%d",&roll);
	printf("enter the name of the student\n");
	scanf("%s",&name);
	printf("Enter the marks of the student\n");
	scanf("%d%d%d",&m1,&m2,&m3);
	avg=(m1+m2+m3)/3;
	printf("average mark of three subjects is%f\n",avg);
	if(avg>=90&&avg<=100)
	{
		printf("the student have A grade with the average mark of%f\n ",avg);
		}
		else if(avg>80&&avg<90)
		{
			printf("the student have B grade with averagemark of%f\n",avg);
		}
		else if(avg>70 && avg<80)
		{
			printf("the student have C grade with the average mark of %f\n ",avg);
		}
		else if(avg>60 && avg<70)
		{
			printf("the student have D grade with the average mark of%f\n",avg);
		}
		else{
			printf("the student has failed ");
			
	}
}

