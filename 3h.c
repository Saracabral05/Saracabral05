 #include<stdio.h>
 #include<math.h>
int main()
{
    int a;
    int b;
    int c;
    int d;

    printf ("insira suas notas");
    scanf ("%i",&a);
    scanf ("%i",&b);
    scanf ("%i",&c);
    scanf ("%i",&d);
    if ((a%2==0) || (a%3==0))

    {
        printf("%i",a);
    }
     if ((b%2==0) || (b%3==0))

    {
        printf("%i",b);
    }
     if ((c%2==0) || (c%3==0))

    {
        printf("%i",c);
    }
     if ((d%2==0) || (d%3==0))

    {
        printf("%i",d);
    }
}
