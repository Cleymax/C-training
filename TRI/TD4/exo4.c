#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <complex.h>

int tire_aleatoire(void);
int demande_nombre(void);
int test_nombre(int user, int alea);
void affichage(int result);
int fin_jeu(int x, int n);
void jeu_plus_moins();

int main(int argc, char const *argv[])
{
	jeu_plus_moins();
 	return EXIT_SUCCESS;
}

int tire_aleatoire(void)
{
	srand( time( NULL ) );
	return rand() % 100 - 50;
}

int demande_nombre(void)
{
	int ask;
	printf("Entre un nombre entre -50 et 50: ");
	scanf("%d", &ask);
	return ask;
}

int test_nombre(int user, int alea)
{
	if(user < alea)
	{
		return 1;
	}
	else if (user > alea)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

void affichage(int result)
{
	switch(result){
		case 1:
			printf("\033[0;34m- le nombre est plus grand !\033[0m\n");
			break;
		case -1:
			printf("\033[0;33m- le nombre est plus petit !\033[0m\n");
			break;
	}
}

int fin_jeu(int nbCoups, int result)
{
	return (nbCoups <= 10 && result == 0) ? 1 : 0;
}

void jeu_plus_moins(void)
{
	int hidden = tire_aleatoire();
	int nbCoups = 0;
	int result;

	do {
		int userNumber = demande_nombre();
		result = test_nombre(userNumber, hidden);
		affichage(result);
	} while(!fin_jeu(nbCoups, result));

    printf("\033[0;32mBravo ! \033[0m\nVous avez le nombre !  C'était: %d\n", hidden);
}