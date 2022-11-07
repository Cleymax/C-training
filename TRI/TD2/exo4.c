#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	float moyenne;

	printf("Entre votre moyenne générale: \n");
	scanf("%f", &moyenne);

	if (moyenne < 10)
	{
		printf("Revenez en septembre pour les rattrapages\n");
	}
	else if(moyenne < 15)
	{
		printf("Bien\n");
	}
	else
	{
		printf("Très bien !\n");
	}
}