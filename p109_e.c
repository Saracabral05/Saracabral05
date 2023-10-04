#include<stdio.h>
#include<math.h>
void main()
{
    float X1;
    float X2;
    float X3;
    float a;
    float b;
    float c;
    float DELTA;

    printf ("insira suas notas");
    scanf ("%f",&a);
    scanf ("%f",&b);
    scanf ("%f",&c);
    DELTA= (b*b)-4*a*c;
    if (DELTA<0){
        printf ("nao ha solucao real");
    }
    if (DELTA>0){
        X1=(-b+sqrt(DELTA))/2*a;
        X2=(-b-sqrt(DELTA))/2*a;
        printf ("ha duas solucoes reais,elas sao X1 e X2");
    }
    else
    X3=-b/2*a;
        {
        printf("ha uma solucao real, a solucao e X3");
        }

}
