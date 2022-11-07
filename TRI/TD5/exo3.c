#include <stdio.h>
#include <stdlib.h>

float moyenne(float notes[]);
void lecture_note_etudiant(char prenoms[3][20], float notes[3][5]);

int main(int argc, char const *argv[])
{
	char prenoms[3][20];

	for (int i = 0; i < 3; ++i)
	{
		printf("Entrez un %dème prenom:",i+1);
		scanf("%s", &prenoms[i]);
	}

	float notes[3][5];

	for (int i = 0; i < 3; ++i)
	{
		printf("\t- %s\n", prenoms[i]);

		for (int j = 0; j < 5; ++j)
		{
			printf("Entrez la %dème note:", j+1);
			scanf("%f", &notes[i][j]);
		}
	}

	lecture_note_etudiant(prenoms, notes);
	
	return 0;
}

void lecture_note_etudiant(char prenoms[3][20], float notes[3][5])
{
	printf(" \tNote1\tNote2\tNote3\tNote4\tNote5\tMoyenne\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("%s\t", prenoms[i]);
		for (int j = 0; j < 5; ++j)
		{
			printf("%.2f\t", notes[i][j]);
		}
		printf("%.2f\n", moyenne(notes[i]));
	}
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