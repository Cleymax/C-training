#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <complex.h>


float moyenne(float notes[]);


int main(int argc, char const *argv[])
{
	float notes[5];

	for (int i = 0; i < 5; ++i)
	{
		float b = 0;
		printf("Entrez votre %dème note: ", i );
		scanf("%f", &b);
		notes[i] = b;
	}

	printf("\nVos notes:\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("\t%.2f\n", notes[i]);
	}

	printf("Moyenne des notes: %.2f\n", moyenne(notes));

	return 0;
}

float moyenne(float notes[])
{
	float somme= 0;

	for (int i = 0; i < 5; ++i)
	{
		somme += notes[i];
	}


	return somme / 5 ;
}