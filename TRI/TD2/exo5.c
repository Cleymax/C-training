#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int A;
	printf("Entrez un nombre entier: ");
	scanf("%d", &A);

	int B;

	if (A % 3 == 0)
	{
		B = (A/3 +2); 
	}
	else 
	{
		B = (A% 3 + 1);
	}

	printf("B=%d\n", B);
	
	return 0;
}