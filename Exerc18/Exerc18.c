#include <stdio.h>
#include <math.h>
 int main()
 {
	 int a,numd,r;
	 char nome;
	 float h,soma;
	 for(a=1;a<=30;a++) 
	 {
		 printf("Informe o seu nome: \n");
		 scanf("%s",&nome);
		  printf("Informe o numero de dias: \n");
		 scanf("%i",&numd);
		 r=numd*50;
		 if(numd<15){
			 h=r+4;
		 }
		 if(numd==15){
			 h=r+3.60;
		 }
		 if(d>numd){
			 h=r+3;
		 }
		 soma+=h;
		 printf("O valor a ser pago e %f \n",h);
		  printf("O nome do cliente e %c \n",nome);
	 }
	 printf("A soma total e %f \n",soma);
	 printf("Obrigado. \n");
	 return 0;
 }