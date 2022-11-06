/*
 * File: exo6.c
 * Created on Sun Nov 06 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <word> <file>\n", argv[0]);
        return -1;
    }

    char *word = argv[1];
    char *file = argv[2];

    FILE *f = fopen(file, "r");

    if (f == NULL)
    {
        fprintf(stderr, "Error: cannot open file %s\n", file);
        return -2;
    }

    // print count and line number when the word appears each line of the file f
    int count = 0;
    int line = 1;
    char c;
    while ((c = fgetc(f)) != EOF)
    {
        if (c == '\n')
        {
            line++;
        }
        else if (c == word[count])
        {
            count++;
            if (word[count] == '\0')
            {
                printf("Line %d\n", line);
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }


    return 0;
}
