#include<stdio.h>
#include<conio.h>

void display(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{	
	printf("%d\n",arr[i]);
}
}

void main()
{
	int arr[]={20,30,40,50,60};
	display(arr,5);
	
}


