#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int x;

	do {
		printf("Entrez un entier entre 97 et 122 inclus: ");
		scanf("%d", &x);
	}while(x < 97 || x > 122);

	printf("Nombre saisi: %d\n", x);
	

	return 0;
}