#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int N;
	printf("Entrez le nombre de nombres entiers que vous voulez rentrer: ");
	scanf("%d", &N);

	int somme= 0;
	int produit=1;

	for(int i = 0; i <= N; i++)
	{
		int x;
		printf("\tRentrez votre %deme nombre entier: ", i);
		scanf("%d", &x);

		somme+=x;
		produit*=x;
		i++;
	}
	
	double moy = (double)somme / N;
	printf("\nSomme: %d\nProduits: %d\nMoyenne: %f\n", somme, produit, moy);

	return 0;
}