#include<stdio.h>
#include<math.h>

void main()
{
    int n,r;

    printf("insira um numero:");
    scanf("%i",&n);

    r =pow(n,2);
    if(r>=30)
    {
        printf("%i",r);
    }
}
