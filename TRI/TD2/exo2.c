#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a,b;

	printf("Entrez 2 nombre entier séparé par un espace: \n");
	scanf("%d %d", &a, &b);

	if(a > b)
	{
		printf("%d est plus grand que %d !\n", a, b);
	}

	if(a == b)
	{
		printf("%d égal %d !\n", a ,b );
	}

	if (a < b)
	{
		printf("%d est plus petit que %d !\n", a, b);
	}


	return 0;
}