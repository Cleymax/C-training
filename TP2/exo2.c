/*
 * File: exo2.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int d = 538;

    printf("%d", (d >> 20 & 1 && d >> 4 & 1 ? 1 : 0));
}
