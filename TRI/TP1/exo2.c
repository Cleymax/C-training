#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
	int a = 0;
	printf("Entrez un nombre entier:");
	scanf("%d", &a);

	for( int i = 1 << 16; i > 0; i /= 2)
	{
		printf("%d", (a & i ) ?  1: 0);
	} 
	
	printf("\n");
	return 0;
}