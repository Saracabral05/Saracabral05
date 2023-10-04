#include<stdio.h>

void main()

{
    int x,y,w;

    printf("insira dois numeros inteiros: \n ");
    scanf("%i",&x);
    scanf("%i",&y);
     w=x-y;

     if (w>=0)
     {
         printf("a diferenca e positiva");
     }
     else
     {
         printf("a diferenca e negativa");
     }

}
