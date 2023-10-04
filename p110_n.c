#include<stdio.h>

void main()

{
    int r,a,b,c;

    printf("insira 3 variaveis: \n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);

    r=a+b+c;
    if(r<=100)
    {
        printf("%i",r);
    }

}
