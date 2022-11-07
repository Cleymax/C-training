#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int carre(int n);
void carre_bis(void);
int puissance4(int n);


int main(void)
{
	int b;
	printf("Entre un nombre entier: ");
	scanf("%d", &b);


	printf("Le carre de %d est %d.\n", b, carre(b));


	carre_bis();
	return 0;
}


int carre(int n)
{
	return n*n;
}

void carre_bis(void)
{
	int x;
	printf("Un nombre entier: ");
	scanf("%d", &x);
	printf("Le carre de %d est %d.\n", x, carre(x));
	printf("La puissance4 de %d est %d.\n",x, puissance4(x));
}

int puissance4(int n)
{
	int result = 1;

	for (int i = 0; i < 4; ++i)
	{
		result *= n;
	}

	return result;
}