#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



int main(void)
{
    srand( time( NULL ) );

    int number = rand() % 100 -50;

    int ask;

    do {
    	printf("Entre un nombre entre -50 et 50: ");
    	scanf("%d", &ask);

    	if(ask < number) {
    		printf("\033[0;34m- le nombre est plus grand !\033[0m\n");
    	}else if (ask > number){
    		printf("\033[0;33m- le nombre est plus petit !\033[0m\n");
    	}

    }while(ask != number);

    printf("\033[0;32mBravo ! \033[0m\nVous avez le nombre !  C'était: %d\n", number);

	return EXIT_SUCCESS;
}