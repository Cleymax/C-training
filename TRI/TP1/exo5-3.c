#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void complet(char chaine[]);
char voyelle(char b);
void chiffrer(char chaine[]);


int main(int argc, char const *argv[])
{
	printf("quelle est votre chaine de caractères à crypter ?\n");
	char chaine[50];
	scanf("%s", & chaine);
	complet(chaine);
	printf("%s\n",chaine );
	return 0;
}

char voyelle(char b)
{
	char voyelle[] = {'a','e','i', 'o', 'u', 'y'};

	char result = b;

	for (int i = 0; i < 6; ++i)
	{
		if(b == voyelle[i]){
			result  = i +'0';
		}
	}
	return result;
}

void chiffrer(char chaine[])
{
	for (int i = 0; chaine[i] != '\0'; ++i)
	{
		if(chaine[i] >= 'a' && chaine[i] <= 'z'){
			char b = chaine[i]  -'a';
			b += 10;
			b = b % 26;
			chaine[i] = b + 'a' ;
		}
	}

}


void complet(char chaine[])
{
	chiffrer(chaine);

	for(int i = 0; chaine[i] != '\0'; i++)
	{
		chaine[i] = voyelle(chaine[i]);
	}
}