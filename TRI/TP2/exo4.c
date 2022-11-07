#include <stdio.h>
#include <stdlib.h>

void copieMotif(char * texte, char * motif, int espaces);


int main(int argc, char const *argv[])
{
	char texte[] = "0123456789012345678901";
	copieMotif(texte, "abc", 3);
	printf("%s\n", texte);

	return 0;
}

void copieMotif(char * texte, char * motif, int espaces)
{
	for(int i = 0; texte[i] != '\0'; i+=espaces)
	{
		for(int j = 0; motif[j] != '\0' && texte[i+1] != '\0'; j++)
		{
			texte[i+j] = motif[j];
			
		}
		i++;
	}
}