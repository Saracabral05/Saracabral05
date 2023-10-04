#include<stdio.h>

void main()

{
    int i;

    printf("insira sua idade: ");
    scanf("%i",&i);

    if(i>18)
    {
        printf("maior de idade");
    }
     else
    {
        printf("menor de idade");
    }
}
