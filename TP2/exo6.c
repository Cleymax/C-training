/*
 * File: exo6.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

#define STUDENTS 5

typedef struct
{
    char firstName[100];
    char lastName[100];
    char address[100];
} Student;

int main(int argc, char const *argv[])
{

    Student students[STUDENTS];
    int grades[STUDENTS][2];

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("\tFirst name: ");
        scanf("%s", students[i].firstName);
        while (getchar() != '\n')
            ;
        printf("\tLast name: ");
        scanf("%s", students[i].lastName);
        while (getchar() != '\n')
            ;
        printf("\tAddress: ");
        scanf("%s", students[i].address);
        while (getchar() != '\n')
            ;
        printf("\tGrade Programation C: ");
        scanf("%d", &grades[i][0]);
        while (getchar() != '\n')
            ;
        printf("\tGrade System: ");
        scanf("%d", &grades[i][1]);
        while (getchar() != '\n')
            ;
    }

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("\tFirst name: %s\n", students[i].firstName);
        printf("\tLast name: %s\n", students[i].lastName);
        printf("\tAddress: %s\n", students[i].address);
        printf("\tGrade Programation C: %d\n", grades[i][0]);
        printf("\tGrade System: %d\n", grades[i][1]);
    }

    return 0;
}
