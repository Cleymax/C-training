#include <stdio.h>
#include <stdlib.h>

void demande_prenom(char prenom[]);
void lecture_prenom(char prenom[]);


int main(int argc, char const *argv[])
{
	char prenom[20];
	demande_prenom(prenom);
	lecture_prenom(prenom);
	return 0;
}


void demande_prenom(char prenom[])
{
	printf("Entrez votre prenom: ");
	scanf("%s", prenom);
}

void lecture_prenom(char prenom[])
{
	printf("Votre prenom: %s\n", prenom);
}