#include <stdio.h>
 int main()
 {
	 int anocorrente,anonascimento,w,f;
     printf("Informe  o ano actual: \n");
     scanf("%i",&anocorrente);
     printf("Informe o ano de nascimento: \n");
     scanf("%i",&anonascimento);
	 w=anocorrente-anonascimento;
     printf("A sua idade atual e %i \n",w);
	 f=2050-anonascimento;
	 printf("Em 2050, tu teras %i \n",f);
	 printf("Obrigado. \n");
	 return 0;
 }