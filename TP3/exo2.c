/*
 * File: exo2.c
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

    for (int i = 0; i < SIZE; i++)
        entier[i] = rand() % 500;

    int min = 0;
    int max = 0;

    for (int i = 0; i < 100; i++)
    {
        if (entier[i] < min)
        {
            min = entier[i];
        }
        if (entier[i] > max)
        {
            max = entier[i];
        }
    }

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    // printable entier
    for (int i = 0; i < SIZE; i++)
        printf("%d ", entier[i]);

    return 0;
}
