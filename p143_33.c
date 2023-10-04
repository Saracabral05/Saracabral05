#include <stdio.h>

int main()
{
    int n;   //nota
    printf ("insira sua nota: ");
    scanf("%i",&n);


    if(n>=8)
    {
        printf("aprovado");
    }
    if(n<=7 && n>=4)
    {
        printf("recuperacao");
    }
    if(n<4)
    {
        printf("reprovado");
    }


}
