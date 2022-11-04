/*
 * File: exo6-while.c
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
    int i = 0;

    while (i < taille)
    {
        int j = 0;
        while (j <= i)
        {
            if ((i == taille - 1) || (j == 0 || j == i))
            {
                printf("*");
            }
            else
            {
                printf("#");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}