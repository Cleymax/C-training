/*
 * File: exo7.h
 * Created on Sun Nov 06 2022
 * Author: Clément PERRIN
 */

typedef struct
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
} Color;


typedef struct ColorList
{
    Color *colors;
    int size;
} ColorList;


void insertion(Color *color, struct ColorList *colors);
void parcours(struct ColorList *colors);