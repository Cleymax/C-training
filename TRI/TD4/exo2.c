#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <complex.h>

void polaire(double x, double y);

int main(void)
{
	polaire(1 ,1);
	return 0;
}

void polaire(double x, double y)
{
	double module = sqrt(x + y);
	double argument = atan2( y , x);

	printf("Module: %f\n", module);
	printf("argument: %f\n", argument);
}