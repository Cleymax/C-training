/*
 * File: exo8.c
 * Created on Sat Nov 05 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    char phrase[SIZE][10] = {"Bonjour", "Comment", "Tu", "Vas", "Je", "Suis", "Content", "De", "Te", "Voir"};


    printf("Phrases: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s\n", phrase[i]);
    }
    printf("\n");

    printf("Entrez une phrase: ");
    char phraseChercher[10];
    scanf("%s", &phraseChercher);

    int found = 0;

    for (int i = 0; i < SIZE; i++)
    {
        int good = 1;
        for(int j = 0; phrase[i][j] != '\0'; j++)
        {
            if (phrase[i][j] != phraseChercher[j])
            {
                good = 0;
            }
        }

        if (good == 1)
        {
            found = 1;
        }
    }

    if (found == 1)
    {
        printf("La phrase existe.\n");
    }
    else
    {
        printf("La phrase n'existe pas.\n");
    }

    return 0;
}
