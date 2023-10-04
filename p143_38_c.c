#include<stdio.h>
int main()
{
    float N1,N2,R;
    int n1,n2,r;
    printf("insira dois numeros: ");
    scanf("%i %i",&n1,&n2);
    if((n1 !=0)&&(n2 != 0))
    {
        scanf("%i",&r);
        switch(r)
        {
            case 0:
                printf("soma: %i", n1+n2);
            break;
            case 1:
                printf("subtracao: %i", n1-n2);
            break;
            case 2:
                printf("produto: %i", n1*n2);
            break;
            case 3:
                N1 = n1;
                N2 = n2;
                R = N1/N2;
                printf("divisao: %f", R);
            break;
        }
    }
}
