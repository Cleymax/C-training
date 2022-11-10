/*
 * File: exo2.c
 * Created on Wed Nov 09 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include "exo2.h"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <path>", argv[0]);
        exit(1);
    }

    lire_dossier_recursif(argv[1]);

    return 0;
}

void lire_dossier_recursif(char *path)
{
    struct dirent *dir;
    DIR *d = opendir(path);
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {

            if (dir->d_type == DT_DIR)
            {
                if (strcmp(dir->d_name, "..") != 0 && strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, ".git") != 0)
                {
                    printf("[d] %s\n", dir->d_name);

                    char *temp = malloc(strlen(path) + strlen("/") + 256);
                    strcat(temp, path);
                    strcat(temp, "/");
                    strcat(temp, dir->d_name);

                    lire_dossier_recursif(temp);
                    free(temp);
                }
            }
            else
            {
                printf("[f] %s\n", dir->d_name);
            }
        }
        closedir(d);
    }
    else
    {
        printf("Error: cannot open directory %s", path);
    }
}
