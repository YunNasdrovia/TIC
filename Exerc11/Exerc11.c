#include <stdio.h>
#include<math.h>
 int main()
 {
	 int a,b,c;
	 float d;
	 double x1,x2;
	 printf("a: ");
    scanf("%i",&a);
    printf("\n");
      printf("b: ");
    scanf("%i",&b);
    printf("\n");
    printf("c: ");
    scanf("%i",&c); 
    printf("\n");
    d=pow(b, 2)-4*a*c;
    printf("Delta: %f\n",d);
    if(d>0)
	{
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		printf("X1=%f\n",x1);
			printf("X2=%f\n",x2);
    }else
	{
     printf("O valor de delta e negativo. \n");
    }
	 printf("Obrigado. \n");
	 return 0;
 }