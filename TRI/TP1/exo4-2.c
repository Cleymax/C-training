#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	printf("Combien de case à votre tableau ?");
	int size = 0;
	scanf("%d", &size);

	int table[size];
	for (int i = 0; i < size; ++i)
	{
		printf("quelle est la valeur de la %deme case de votre tableau ?", i+1);
		int tmp = 0;
		scanf("%d", &tmp);
		table[i] = tmp;
	}

	printf("Tableau de départ:\n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d\t", table[i]);
	}
	printf("\n");
	
	trier(size, table);

	printf("Talbeau trié:\n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d\t", table[i]);
	}
	printf("\n");

	return 0;
}

void trier(int size, int table[])
{

	for(int j = 0; j < size ; j++)
	{
		for (int i = 0; i < size-1 ; ++i)
		{
			if(table[i] > table[i +1])
			{
				int tmp = table[i];
				table[i] = table[i +1];
				table[i+1] = tmp;
			}
		}
	}
}