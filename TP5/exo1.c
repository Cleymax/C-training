/*
 * File: exo1.c
 * Created on Wed Nov 09 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include "exo1.h"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <path>", argv[0]);
        exit(1);
    }

    lire_dossier(argv[1]);
    return 0;
}

void lire_dossier(char *path)
{
    struct dirent *dir;
    DIR *d = opendir(path);
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
    else
    {
        printf("Error: cannot open directory %s", path);
    }
}