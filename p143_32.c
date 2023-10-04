#include <stdio.h>
#include<math.h>

int main()
{
    float a;   //altura
    float m;   //massa
    float imc;

    printf("insira sua altura:");
    scanf("%f",&a);
    printf("insira sua massa:");
    scanf("%f",&m);

    imc=pow(m/a,2);

      if ((imc>=18.5)&&(imc<25))
      {
          printf("normal \n");
      }
      else if ((25<=imc)&&(imc<30))
      {
          printf("sobrepeso \n");
      }
      else if ((30<=imc)&&(imc<35))
      {
          printf("obesidade grau1 \n");
      }
      else
      {
          printf("situacao de obesidade grau2 \n");
      }

         printf("seu imc: %.3f",imc);


}
