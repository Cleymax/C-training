#include <stdio.h>
#include <stdlib.h>
#include <math.h>


char voyelle(char b);

int main(int argc, char const *argv[])
{
	printf("quelle est votre chaine de caractères à crypter ?\n");
	char chaine[50];
	scanf("%s", & chaine);

	for (int i = 0; chaine[i] != '\0'; ++i)
	{
		printf("%c", voyelle(chaine[i]));
	}
	printf("\n");
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