#include<stdio.h>

void main()

{
    float m,x,y,w;
    printf("insira suas 3 notas: \n");
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&w);
    m=(x*2+y*3+w*5)/(2+3+5);
      printf("sua media e: %.2f \n",m);
    if(m>=7)
    {
        printf("aprovado");
    }
    else{printf("reprovado");}
}
