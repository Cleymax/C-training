#include <stdio.h>
#include <stdlib.h>

void initialisation(int matrice[10][10]);
void affichage(int matrice[10][10]);

int main(void)
{
	
	int matrice[10][10];
	int tmp[10][10];

	initialisation(matrice);
	initialisation(tmp);

	affichage(matrice);

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			matrice[j][i] = tmp[i][j];
		}
	}
	printf("\n\n");

	affichage(matrice);
	return 0;
}

void initialisation(int matrice[10][10])
{
	int i;
	int j;
	for (i = 0; i < 10	; i++)
	{
		for (j = 0; j < 10; j++)
		{
			matrice[i][j] =  2*i+j;
		}
	}
}

void affichage(int matrice[10][10])
{
	int i,j;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			printf("%d\t", matrice[i][j]);
		}
		printf("\n");
	}
}