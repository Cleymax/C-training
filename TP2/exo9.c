/*
 * File: exo9.c
 * Created on Tue Nov 08 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int tab[10];
    float tob[10];

    for (int i = 0; i < 10; i++)
    {
        *(tab + 1) = rand() % 100;
        *(tob + 1) = ((float)rand() / (float)RAND_MAX) *100;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("tab[%d] = %d\n", i, *(tab + i));
        printf("tob[%d] = %f\n", i, *(tob + i));
    }

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            *(tab + i) *= 3;
            *(tob + i) *= 3;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("tab[%d] = %d\t", i, *(tab + i));
        printf("tob[%d] = %f\n", i, *(tob + i));
    }

    return 0;
}
