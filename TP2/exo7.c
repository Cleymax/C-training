/*
 * File: exo7.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

struct Color
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
} ;

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    struct Color colors[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        colors[i].red = rand() % 256;
        colors[i].green = rand() % 256;
        colors[i].blue = rand() % 256;
        colors[i].alpha = rand() % 256;
    }

    colors[0].red = 0x22;
    colors[0].green = 0x33;
    colors[0].blue = 0x44;
    colors[0].alpha = 0x55;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Color %d: #%02x%02x%02x%02x\n", i, colors[i].red, colors[i].green, colors[i].blue, colors[i].alpha);
    }

    return 0;
}
