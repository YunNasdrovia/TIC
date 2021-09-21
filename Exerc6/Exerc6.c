#include <stdio.h>
  int main()
  {
	  float cost,price,m;
	  printf("Informe o custo do espectaculo teatral: \n");
	  scanf("%f",&cost);
	   printf("Informe o preco dos convites: \n");
	  scanf("%f",&price);
	  m=cost/price;
	  printf("A quantidade de convites que devem ser vendidos e %f \n",m);
	   printf("Obrigado. \n");
	  return 0;
  }