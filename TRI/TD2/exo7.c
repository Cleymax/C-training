#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int a,b,c;
	printf("Entrez 3 entier séparé par un espace: ");
	scanf("%d %d %d", &a, &b, &c);

	if((a+b) > (c % 5) && ((a-b) != (c-b) || (a + 3) == (c - 86)))
	{
		printf("OK\n");
	}
	else 
	{
		printf("Non OK\n");
	}
	return 0;
}