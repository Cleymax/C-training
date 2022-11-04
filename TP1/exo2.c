/*
 * File: exo2.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float rayon = 10;
    float pi = 3.14;
    float aire = pi * rayon * rayon;
    printf("L'aire du cercle de rayon %f est %f\n", rayon, aire);

    float perimeter = 2 * pi * rayon;
    printf("Le périmètre du cercle de rayon %f est %f\n", rayon, perimeter);

    return 0;
}
