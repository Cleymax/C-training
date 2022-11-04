/*
 * File: exo6.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

void triangle(int taille);

int main(void)
{
    printf("Entre un chiffre:");
    int nombre;
    scanf("%d", &nombre);
    triangle(nombre);
    return 0;
}

void triangle(int taille)
{
    for (int i = 0; i < taille; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i == taille - 1) || (j == 0 || j == i))
            {
                printf("*");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}