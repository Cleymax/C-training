/*
 * File: exo5.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

struct Etudiant
{
    char nom[20];
    char prenom[20];
    int age;
    int note;
};


int main(int argc, char const *argv[])
{
    int studentCount = 2;

    struct Etudiant clement = {"Clement", "Boussard", 20, 18};
    struct Etudiant alexandre = {"Alexandre", "Boussard", 20, 20};



    int gradesCount = 2;

    int grades[studentCount][gradesCount];

    for (int i = 0; i < studentCount; i++)
    {
        for (int j = 0; j < gradesCount; j++)
        {
            printf("Entrez la note %d de %s : ", j + 1, students[i].prenom);
            scanf("%d", &grades[i][j]);
        }
    }

    for (int i = 0; i < studentCount; i++)
    {
        int sum = 0;
        for (int j = 0; j < gradesCount; j++)
        {
            sum += grades[i][j];
        }
        printf("La moyenne de l'étudiant %s est de %d.\n", students[i].prenom, sum / gradesCount);
    }

    return 0;
}