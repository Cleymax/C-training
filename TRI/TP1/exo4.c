#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	
	int main[10] = {7,0,1,9,3,2,7,6,4,5};

	printf("Tableau de départ:\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t", main[i]);
	}
	printf("\n");

	int SIZE = 10;

	for(int j = 0; j < SIZE ; j++)
	{
		for (int i = 0; i < SIZE-1 ; ++i)
		{
			if(main[i] > main[i +1])
			{
				int tmp = main[i];
				main[i] = main[i +1];
				main[i+1] = tmp;
			}
		}
	}

	printf("Talbeau trié:\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t", main[i]);
	}
	printf("\n");

	return 0;
}