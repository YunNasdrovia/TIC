#include <stdio.h>
   int main()
   {
	    float salario,f,w,m;
	   printf("Informe o seu salario: \n");
	   scanf("%f",&salario);
	   printf("Infome a percentual do aumento: \n");
	   scanf("%f",&m);
	  f=(salario*m)/100;
	  w=salario+f;         
	   printf("O novo salario e %f \n",w);
	    printf("Obrigado. \n");
	   return 0;
   }