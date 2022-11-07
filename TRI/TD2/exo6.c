#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int a;
	printf("Entre un entier entre 0 et 10: ");

	scanf("%d", &a);


	switch(a){
		case  1:
			printf("%d <--> %s\n", a,"un");
			break;
		case  2:
			printf("%d <--> %s\n", a,"deux");
			break;
		case  3:
			printf("%d <--> %s\n", a,"trois");
			break;
		case  4:
			printf("%d <--> %s\n", a,"quatre");
			break;
		case  5:
			printf("%d <--> %s\n", a,"cinq");
			break;
		case  6:
			printf("%d <--> %s\n", a,"six");
			break;
		case  7:
			printf("%d <--> %s\n", a,"sept");
						break;
		case  8:
			printf("%d <--> %s\n", a,"huit");
						break;
		case  9:
			printf("%d <--> %s\n", a,"neuf");
			break;
		case  10:
			printf("%d <--> %s\n", a,"dix");
			break;
		default:
			printf("Inconnue !\n");
			break;
	}

	return 0;

}