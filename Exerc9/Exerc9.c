#include <stdio.h>
  int main()
  {
	  float f,peso,kg,l;
	  int q;
	  printf("Informe o peso do saco de racao: \n");
	  scanf("%f",&peso);
	  printf("Informe a quantidade diaria de racao: \n");
	  scanf("%i",&q);
	  f=q*2*5;
	  kg=f*0.001;
	  l=peso-kg;
	  printf("Apos 5 dias, restara %f de racao. \n",l);
	   printf("Obrigado. \n");
	  return 0;
  }