#include <stdio.h>
 int main()
 {
	 float salariom,qtdw,m,u,h,k,s;
	 printf("Informe o salario minimo: \n");
	 scanf("%f",&salariom);
	 printf("Informe a quantidade de kilowatts: \n");
	 scanf("%f",&qtdw);
	 m=salariom/5;
	 s=m*qtdw;
	 h=(s*15)/100;
	 k=u-h;
	 printf("O valor de cada kilowaats e %f \n",m);
	 printf("O valor a ser pago %f \n",u);
	 printf("O desconto e %f \n",k);
	  printf("Obrigado. \n");
	 return 0;
 }