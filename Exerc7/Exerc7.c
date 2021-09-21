  #include <stdio.h>
  #include<stdlib.h>
  #include<math.h>
  int main()
  {
	  float pref,pld,pi,dl,di,pf; 
    printf("Informe o preco de fabrica: \n");
    scanf("%f",&pref);
    printf("Informe o percentual do lucro do distribuidor: \n");
    scanf("%f",&pld);
	printf("Informe o percentual do imposto: \n");
	scanf("%f",&pi);
	dl=(pref*pld)/100;
	di=(pref*pi)/100;
	pf=pref+dl+di;
	printf("O lucro do distribuidor e %f \n",dl);
	printf("O imposto %f \n",di);
	printf("O preco final e %f \n",pf);
    printf("Obrigado. \n");
	  return 0;
  }