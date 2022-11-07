#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void chiffrer(char chaine[]);

void dechiffrer(char chaine[]);

int main(int argc, char const *argv[])
{
	printf("quelle est votre chaine de caractères à crypter ?\n");
	char chaine[50];
	scanf("%s", & chaine);
	chiffrer(chaine);
	printf("Chaine crypter: %s\n", chaine);
	dechiffrer(chaine);
	printf("Chaine dechiffrer: %s\n", chaine);
	return 0;
}

void chiffrer(char chaine[])
{
	for (int i = 0; chaine[i] != '\0'; ++i)
	{
		if(chaine[i] >= 'a' && chaine[i] <= 'z'){
			char b = chaine[i]  -'a';
			b += 10;
			b = b% 26;
			chaine[i] = b + 'a' ;
		}
	}

}

void dechiffrer(char chaine[])
{
	for (int i = 0; chaine[i] != '\0'; ++i)
	{
		if(chaine[i] >= 'a' && chaine[i] <= 'z'){
			char b = chaine[i]  -'a';
			b = b% 26;			
			b -= 10;

			chaine[i] = b + 'a' ;
		}
	}
}