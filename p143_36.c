#include<stdio.h>

void main()

{
    float v;  //deve
    float t;  //troco
    float p;  //preco
    float d;  //pagamento

    printf("insira a que deve pagar dinheiro: ");
    scanf("%f",&d);
    printf("insira preco que vai pagar: ");
    scanf("%f",&p);


    if(d==p)
    {
        printf("dinfeiro suficiente");
    }
    if(d>p)
    {
        v=p-d;
        printf("dinheiro nao suficiente, voce deve: %.2f",v);
    }

    if(p>d)
    {
        t=p-d;
        printf("dinheiro mais que o suficiente, seu troco e: %.2f",t);
    }
}
