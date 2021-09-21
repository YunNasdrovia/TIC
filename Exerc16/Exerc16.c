#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	float altura,mai,men;
	for(a=1;a<=15;a++){
	printf("Informeas a altura\n");
	scanf("%i",&altura);
		if(a==1){
			maior=altura;
			menor=altura;
		}
		if(maior<altura){
			maior=altura;
		}
		if(menor>altura){
		menor=altura;
		}
	}
 printf("Maior e %f",maior);
 printf("Menor e %f",menor);
 printf("Obrigado. \n");
	return 0;
}