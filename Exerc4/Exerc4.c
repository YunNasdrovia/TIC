#include <stdio.h>
   int main()
   {
    float salario,r,t;
    printf("Informe o seu salario: \n");
	scanf("%f",&salario);
    r=(salario*25)/100;
    t=salario+r;         
    printf("O seu novo salario e %f \n",t);
	printf("Obrigado. \n");
	   return 0;
   }