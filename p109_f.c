#include <stdio.h>

void main()

{
    int aux;
    int a,b,c;

    printf("insira tres number diferentes: \n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);

    if(a>c)
    {
        aux=a;
        a=c;
        c=aux;
    }
    if(a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    if(b>c)
    {
        aux=b;
        b=c;
        c=aux;
    }
    printf("%i,%i,%i",a,b,c);

}
