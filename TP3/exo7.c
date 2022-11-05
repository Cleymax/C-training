/*
 * File: exo7.c
 * Created on Sat Nov 05 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

typedef struct
{
    int count;
    short red;
    short green;
    short blue;
    short doublon;
} Color;

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    Color colors[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        colors[i].red = rand() % 256;
        colors[i].green = rand() % 256;
        colors[i].blue = rand() % 256;
        colors[i].count = 0;
        colors[i].doublon = 0;
    }

    colors[0].red=5;
    colors[0].green=5;
    colors[0].blue=5;
    colors[0].doublon = 0;
    colors[0].count = 1;

    colors[1].red=5;
    colors[1].green=5;
    colors[1].blue=5;
    colors[1].doublon = 0;
    colors[1].count = 1;

    colors[2].red=5;
    colors[2].green=5;
    colors[2].blue=5;
    colors[2].doublon = 0;
    colors[2].count = 1;

    printf("Rouge\tVert\tBleu\tCompteur\n");
    for (int i = 0; i < SIZE; i++)
    {
        if (colors[i].doublon == 0)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (colors[i].red == colors[j].red && colors[i].green == colors[j].green && colors[i].blue == colors[j].blue)
                {
                    colors[i].count++;
                    colors[j].doublon = 1;
                }
            }
            printf("0x%hhx\t0x%hhx\t0x%hhx\t%d\n", colors[i].red, colors[i].green, colors[i].blue, colors[i].count);
        }
    }

    return 0;
}
