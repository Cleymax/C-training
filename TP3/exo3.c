/*
 * File: exo3.c
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
    for (int i = 0; i < SIZE; i++){
        entier[i] = rand() % 500;
        printf("%d ", entier[i]);
    }
    printf("\n");


    int temp = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (entier[i] < entier[j])
            {
                temp = entier[i];
                entier[i] = entier[j];
                entier[j] = temp;
            }
        }
    }

    printf("Tableau d'entiers trié: \n\t");
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", entier[i]);
    }
    printf("\n");

    return 0;
}
