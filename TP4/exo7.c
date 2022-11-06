/*
 * File: exo7.c
 * Created on Sun Nov 06 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>
#include "exo7.h"

int main(int argc, char const *argv[])
{
    Color rouge = {0xff, 0x00, 0x00, 0xff};
    Color vert = {0x00, 0xff, 0x00, 0xff};
    Color bleu = {0x00, 0x00, 0xff, 0xff};
    Color jaune = {0xff, 0xff, 0x00, 0xff};

    ColorList *colors = malloc(sizeof(ColorList));

    insertion(&rouge, colors);
    insertion(&vert, colors);
    insertion(&bleu, colors);
    insertion(&jaune, colors);

    parcours(colors);

    return 0;
}

void insertion(Color *color, struct ColorList *colors)
{
    colors->size++;
    colors->colors = realloc(colors->colors, colors->size * sizeof(Color));
    colors->colors[colors->size - 1] = *color;
}

void parcours(struct ColorList *colors)
{
    for (int i = 0; i < colors->size; i++)
    {
        printf("Color %d: #%02x%02x%02x%02x\n", i, colors->colors[i].red, colors->colors[i].green, colors->colors[i].blue, colors->colors[i].alpha);
    }
}