#include <stdio.h>
#include<conio.h>

void main()
{
    int a = 10, res;
    printf("UNARY ARITHMETIC OPERATORS");
    printf("\n-------------------------\n");

    res = a++;
    printf("a is %d, res is %d\n", a, res);

    res = a--;
    printf("a is %d, res is %d\n", a, res);

    res = ++a;
    printf("a is %d, res is %d\n", a, res);

    res = --a;
    printf("a is %d, res is %d\n", a, res);

    printf("+a is %d\n", +a);

    printf("-a is %d\n", -a);

 
}
