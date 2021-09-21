#include <stdio.h>
#include <math.h>
int main()
{
	int k,c,sp,si;
	float medp,medi;
	for (c=1;c<=10;c++){
	printf("Informe um valor: \n");
	scanf("%i",&k);
	if(k%2==0){
		sp+=k;	
	}else
	{
		si+=k;
	}
	}
	medi=si/10;
	medp=sp/10;
	printf("A media dos pares %f\n",medp);
		printf("A media dos Impares %f\n",medi);
		printf("Obrigado. \n");
	return 0;
}