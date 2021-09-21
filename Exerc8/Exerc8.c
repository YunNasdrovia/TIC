#include <stdio.h>
 int main()
 {
	 float salariom,htt,sb,i,sr,horast;
	 printf("Informe o total de horas de trabalho: \n");
	 scanf("%f",&horast);
	 printf("Informe o salario minimo: \n");
	 scanf("%f",&salariom);
	 htt=salariom/2;
	 sb=htt*horast;
	 i=(sb*3)/100;
	 sr=sb-i;
	 printf("O salario bruto sera %f \n",sr);
	  printf("Obrigado. \n");
	 return 0;
 }