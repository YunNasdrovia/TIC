#include <stdio.h>
#include <math.h>
int main()
{
	int i,d,soma=0;
	for(i=1;i<=500;i++){
	printf("Informe um valor: \n");
	scanf("%i",&d);
	if(d%2!=0 && d%3==0)
	{
		soma+=d;
    }	
	}
	printf("A soma e %i \n",soma);
	printf("Obrigado. \n");
	return 0;
}