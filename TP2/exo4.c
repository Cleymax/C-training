/*
 * File: exo4.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char chaine[] = "Bonjour voici un chaine.";

    int nombrecaractere = 0;

    while (chaine[nombrecaractere] != '\0')
    {
        nombrecaractere++;
    }

    printf("La chaine contient %d caractères.\n", nombrecaractere);

    char newchaine[nombrecaractere];

    for (int i = 0; i <= nombrecaractere; i++)
    {
        newchaine[i] = chaine[i];
    }

    printf("nouvelle chaine : %s.\n", newchaine);

    char a[] = "Bonjour";
    char b[] = "LOL";

    int i = 0;
    int j = 0;

    while (a[i] != '\0') i++;

    while (b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }

    a[i] = '\0';

    printf("nouvelle chaine : %s.\n", a);

    return 0;
}