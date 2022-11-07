#include <stdio.h>
#include <stdlib.h>

int test_voyelle(char c);
int compte_chiffre(char a[]);
int compte_consonne(char a[]);
void stat_chaine(char a[]);

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 255; ++i)
	{
		printf("%i\t%c\n",i, i );
	}	

	printf("e par test_voyelle donne %d\n", test_voyelle('e'));
	printf("3 par test_voyelle donne %d\n", test_voyelle('3'));

	char b[] = "J'ai 3 lapins, 6 poules et 2 moutons dans le jardins.";
	
	printf("la chaine \"%s\" à %d chiffres\n", b, compte_chiffre(b));
	printf("la chaine \"%s\" à %d chiffres et %d consonnes.\n", b, compte_chiffre(b), compte_consonne(b));
	stat_chaine(b);


	char a[50];
	printf("entrez une chaine de carractères: ");
	scanf("%[^\n]", &a);
	stat_chaine(a);

	return 0;
}

int test_voyelle(char c)
{
	char voyelles[] = "aeiouyAEIOUYàéèê";
	int result = 0;

	for (int i = 0; voyelles[i] != '\0' ;++i)
	{
		if(voyelles[i] == c){
			result = 1;
		}
	}

	return result;
}

int compte_chiffre(char a[])
{
	int result = 0;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		if(a[i] >= 48 && a[i] <= 57){
			result++;
		}
	}
	return result;
}
int compte_consonne(char a[])
{
	int result = 0;

	for (int i = 0; a[i]!= '\0'; ++i)
	{
		if(!test_voyelle(a[i]) && (a[i] >=97 && a[i] <= 122 )){
			result++;
		}
	}
	return result;
}


void stat_chaine(char a[])
{
	int car=0,chiffres = compte_chiffre(a), voyelles = 0, consonnes = compte_consonne(a), espace;

	for (int i = 0; a[i] != '\0'; ++i)
	{
		if(test_voyelle(a[i])){
			voyelles++;
		}
		if(a[i] == 32){
			espace++;
		}
		car++;
	}

	printf("la chaine \"%s\" contient %d carractères avec %d chiffres, %d voyelles, %d consonnes et %d espaces.\n",a, car,chiffres,voyelles,consonnes,espace);
}
