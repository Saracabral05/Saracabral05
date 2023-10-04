#include<stdio.h>

void main()
{
    int a, b;

    printf("insira dois number: \n");
    scanf("%i",&a);
    scanf("%i",&b);

    if (a>b)
    {
        printf("%i ",a-b);
    }
    if (b>a)
    {
        printf("%i", b-a);
    }
}
