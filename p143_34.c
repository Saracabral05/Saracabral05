#include<stdio.h>

void main()

{
    float n;  //number

    printf("insira um numero:");
    scanf("%f",&n);

    if(n>3)
    {
        printf("number e maior que 3");
    }
    if(n==3)
    {
        printf("number e igual a 3");
    }
    if(n<3)
    {
        printf("number e menor que 3");
    }
}
