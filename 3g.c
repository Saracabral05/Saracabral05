#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;

    printf ("insira suas notas");
    scanf ("%f",&a);
    scanf ("%f",&b);
    scanf ("%f",&c);
    scanf ("%f",&d);
    if ((a%2==0) && (a%3==0))

    {
        printf("a");
    }
     if ((b%2==0) && (b%3==0))

    {
        printf("b");
    }
     if ((c%2==0) && (c%3==0))

    {
        printf("c");
    }
     if ((d%2==0) && (d%3==0))

    {
        printf("d");
    }
}
