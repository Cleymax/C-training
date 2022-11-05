/*
 * File: exo5.c
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

    // recherche dichotomique

    int min = 0;
    int max = 99;
    int middle = 0;
    int found = 0;

    int a = 0;
    printf("Entier: ");
    scanf("%d", &a);

    while (min <= max && found == 0)
    {
        middle = (min + max) / 2;
        if (entier[middle] == a)
        {
            found = 1;
        }
        else
        {
            if (entier[middle] > a)
            {
                max = middle - 1;
            }
            else
            {
                min = middle + 1;
            }
        }
    }

    if (found == 1)
    {
        printf("Trouve en position: %d\n", middle);
    }
    else
    {
        printf("Non trouve\n");
    }

    return 0;
}
