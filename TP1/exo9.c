/*
 * File: exo9.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 563;

    for (int i = sizeof(a) << 3; i; i--)
    {
        printf("%d", (a >> (i - 1)) & 1);
    }

    printf("\n");
    return 1;
}
