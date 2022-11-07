#include <stdio.h>
#include <stdlib.h>

int compter(char s[]);

int main(int argc, char const *argv[])
{
	// char a[] = {'B','2','n','j','0','u','r','\0'};

	printf("Entrez une chaine de caractères:");
	char a[50];
	scanf("%[^\n]", &a);

	int nombre = compter(a);

	printf("Il y a %d chiffre dans cette chaine de caractères !\n",nombre );
	return 0;
}

int compter(char s[])
{
	int final = 0;
	for (int j= 0; s[j] != '\0' ; j++)
	{
		 if(s[j]=='0' || s[j]=='1'|| s[j]=='2'|| s[j]=='3'|| s[j]=='4'|| s[j]=='5'|| s[j]=='6'|| s[j]=='7'|| s[j]=='8'|| s[j]=='9'){
		 	final++;
		 }
	}
	return  final;
}