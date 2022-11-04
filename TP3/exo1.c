/*
 * File: exo1.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Taille int: %lu\n", sizeof(int));
    printf("Taille int*: %lu\n", sizeof(int *));
    printf("Taille int**: %lu\n", sizeof(int **));

    printf("Taille char: %lu\n", sizeof(char));
    printf("Taille char*: %lu\n", sizeof(char *));
    printf("Taille char**: %lu\n", sizeof(char **));
    printf("Taille char***: %lu\n", sizeof(char ***));

    printf("Taille float: %lu\n", sizeof(float));
    printf("Taille float*: %lu\n", sizeof(float *));
    printf("Taille float**: %lu\n", sizeof(float **));
    printf("Taille float***: %lu\n", sizeof(float ***));

    return 0;
}
