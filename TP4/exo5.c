/*
 * File: exo5.c
 * Created on Sat Nov 05 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

int factorielle(int num);

int main(int argc, char const *argv[])
{
    int num;
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &num);

    printf("!%d = %d.\n", num, factorielle(num));
    return 0;
}

int factorielle(int num)
{
    return num == 0 ? 1 : num * factorielle(num - 1);
}