/*
 * File: exo4.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int entier[SIZE];

    printf("Tableau d'entiers: \n\t");
    for (int i = 0; i < SIZE; i++)
    {
        entier[i] = rand() % 500;
        printf("%d ", entier[i]);
    }
    printf("\n");

    printf("Entrez un entier: ");
    int a = 0;
    scanf("%d", &a);

    int found = 0;
    int i = 0;
    do
    {
        if (entier[i] == a)
        {
            found = 1;
        }
        i++;
    } while (i < 100 && found == 0);

    if (found == 1)
    {
        printf("Trouve en position %d\n", i - 1);
    }
    else
    {
        printf("Non trouve\n");
    }

    return 0;
}
