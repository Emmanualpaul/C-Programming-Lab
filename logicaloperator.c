#include <stdio.h>
#include<conio.h>

void main()
{
    int a = 10, b = 20;
    printf("LOGICAL OPERATORS");
    printf("\n-----------------\n");

    if (a > 0 && b > 0)
        printf("AND: Both values are greater than 0\n");
    else
        printf("AND: One or both values are less than or equal to 0\n");

    if (a > 0 || b > 0)
        printf("OR: At least one value is greater than 0\n");
    else
        printf("OR: Both values are less than or equal to 0\n");

    if (!(a > 0 && b > 0))
        printf("NOT: Both values are less than or equal to 0\n");
    else
        printf("NOT: Both values are greater than 0\n");

}
