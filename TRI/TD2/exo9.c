#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int x,y,z;
	printf("Entrez les coordonées d'un point dans l'espace (Ex: '5 8 9'): ");
	scanf("%d %d %d", &x, &y, &z);

	int a = 10, b = 30, c=5;

	if( x <= a && x >= 0 && y <= b && y >= 0 && z <= c && z >= 0)
	{
		printf("Le point saisi est à l'intérieur\n");
	}
	else
	{
		printf("Le point saisi est à l'exterieur\n");
	}

	return 0;
}