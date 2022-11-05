/*
 * File: exo2.c
 * Created on Sat Nov 05 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>
#include "exo2.h"

int main(int argc, char const *argv[])
{
    char nomfichier[100];
    printf("Entrez le nom du fichier: ");
    scanf("%s", &nomfichier);

    lire_fichier(&nomfichier);
    ecrire_dans_fichier("test.txt", "Bonjour");

    return 0;
}

void lire_fichier(char *nom_de_fichier)
{
    FILE *fichier = fopen(nom_de_fichier, "r");
    if (fichier == NULL)
    {
        printf("Impossible d'ouvrir le fichier %s", nom_de_fichier);
    }
    else
    {
        char c;
        while ((c = fgetc(fichier)) != EOF)
        {
            printf("%c", c);
        }
    }
}

void ecrire_dans_fichier(char *nom_de_fichier, char *message)
{
    FILE *fichier = fopen(nom_de_fichier, "w");
    if (fichier == NULL)
    {
        printf("Impossible d'ouvrir le fichier %s", nom_de_fichier);
    }
    else
    {
        fprintf(fichier, "%s", message);
        fclose(fichier);
    }
}