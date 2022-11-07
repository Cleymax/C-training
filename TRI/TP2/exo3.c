#include <stdio.h>
#include <stdlib.h>

int occurences(char * texte, char * mot);

int main()
{
	char mot[100]="chien";
	char phrase[1000]="chien cheval chien chien chat chienne chien chat chienne chien";
	printf("le mot \"%s\" apparait %d fois dans le texte \n\"%s\"\n", mot,occurences(phrase,mot),phrase);
	char mot2[20];
	char phrase2[100];
	printf("Rentrez un mot: ");
	scanf("%s", mot2);
	while(getchar() != '\n'); 
	printf("Rentrez une phrase: ");
	scanf("%[^\n]", phrase2);
	while(getchar() != '\n'); 
	printf("le mot \"%s\" apparait %d fois dans le te texte !\n", mot2, occurences(phrase2, mot2));
	return 0;
}


int occurences(char * texte, char * mot)
{
	int occu = 0;
	for(int i = 0; texte[i] != '\0'; i++){
		int b = 1;
		for(int j = 0; mot[j] != '\0' && texte[i+j] != '\0'; j++)
		{
			if(texte[i+j] != mot[j]){
				b = 0;
			}
			if(mot[j+1] == '\0'){
				if(texte[j+i+1] != 32 && b && texte[i+j+1] != 0){
					b = 0;
				}
			}
		}
		if(b){
			occu++;
		}
	}
	return occu;	
}