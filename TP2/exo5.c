/*
 * File: exo5.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

#define STUDENTS 5

int main(int argc, char const *argv[])
{

    int studentsInformation[STUDENTS][3][100];
    int grades[STUDENTS][2];

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("\tFirst name: ");
        scanf("%s", studentsInformation[i][0]);
        while (getchar() != '\n');
        printf("\tLast name: ");
        scanf("%s", studentsInformation[i][1]);
        while (getchar() != '\n');
        printf("\tAddress: ");
        scanf("%s", studentsInformation[i][2]);
        while (getchar() != '\n');
        printf("\tGrade Programation C: ");
        scanf("%d", &grades[i][0]);
        while (getchar() != '\n');
        printf("\tGrade System: ");
        scanf("%d", &grades[i][1]);
        while (getchar() != '\n');
    }

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("\tFirst name: %s\n", studentsInformation[i][0]);
        printf("\tLast name: %s\n", studentsInformation[i][1]);
        printf("\tAddress: %s\n", studentsInformation[i][2]);
        printf("\tGrade Programation C: %d\n", grades[i][0]);
        printf("\tGrade System: %d\n", grades[i][1]);
    }

    return 0;
}