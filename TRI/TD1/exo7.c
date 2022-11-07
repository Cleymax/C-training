#include <stdio.h>

int main(void)
{
	double x, d = 3.2;
	int i = 2, y;

	y = (int) (((int) 2.9 + 1.1) / d);
	x = d * y;
	
	printf("y=%d et x=%f\n",y,x);
	return(0);
}