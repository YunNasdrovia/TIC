#include <stdio.h>
#include <math.h>
int main()
{
	int n,z,x,m,d,e,k;
	printf("Informe um numero com 5 digitos: \n");
	scanf("%i",&o);
	z=o/10000;
	o=o%1000;
	x=o/100;
	o=o%100;
	m=o/10;
	o=o%10;
	d=o/10;
	o=o%10;
	k=o;
	printf("%i%i%i%i%i",k,d,m,x,z);
	printf("Obrigado. \n");
	return 0;
}