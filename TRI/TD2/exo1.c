#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a;
	printf("Entrez un nombre entier: ");
	scanf("%d", &a);
	while(getchar() != '\n');
	
	char b;
	printf("Entrez un carractère: ");
	scanf("%c", &b);
	

	float c;
	printf("Entrez un nombre réel: ");
	scanf("%f", &c);
	printf("Un nombre entier: %d\nUn carractère: %c\nUn nombre réel: %f\n",a,b, c);
	return 0;
}