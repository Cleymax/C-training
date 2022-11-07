#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	
	printf("resolution du second degre : a*x^2 + b*x + c = 0\nentrez a, b, c :\n");
	int a,b,c;
	scanf("%d,%d,%d", &a , &b, &c);

	int delta = pow(b,2) - (4*a*c);


	if(delta > 0)
	{
		printf("l'équation à 2 racine !\n");
		double x1 = (-b  + sqrt((double)delta)) / (2*a);
		double x2 = (-b - sqrt((double)delta)) / (2*a);
		printf("x1=%.2lf\tx2=%.2lf\n", x1, x2);
	}
	else if (delta == 0)
	{
		printf("l'équation a une racine !\n");
		double x1 = (-b / 2*a);
		printf("x1=%.2lf\n", x1);
	}
	else
	{
		printf("l'équation à deux racines complexes\n");
	}

	return 0;
}