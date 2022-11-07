#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int x;
	printf("Entrez un entier x:");
	scanf("%d", &x);

	int b=0;
	for (int i = 0; i <= x; i++)
	{
		printf("\t%d\n", i);
		b+=i;
	}


	printf("Somme des entiers: %d\n", b);
	return 0;
}	