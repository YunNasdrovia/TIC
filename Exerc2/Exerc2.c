#include <stdio.h>
  int main()
  {
	  float custo,preco,f;
	  printf("Informe o custo do espectaculo: \n");
	  scanf("%f",&custo);
      printf("Informe o preco: \n");
	  scanf("%f",&preco);
	  f=custo/preco;
	  printf("A quantidade e %f \n",f);
      printf("Obrigado. \n");
	  return 0;
  }