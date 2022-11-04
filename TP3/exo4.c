/*
 * File: exo4.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int entier[100] = {
        15, 2, 65, 4, 5, 16,17, 58, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22,223, 24, 25, 26, 27, 218, 29, 30,
        31, 32, 33, 34, 35,136, 37, 38, 39, 40,
        41, 142, 43, 44, 45, 46, 47, 48, 49, 50,
        51, 152, 53, 54, 55, 56, 57, 548, 59, 60,
        61, 162, 63, 164, 65, 66, 67, 68, 169, 70,
        71, 72, 73, 74, 705, 176, 77, 78, 179, 80,
        81, 82, 83, 84, 85, 86, 87, 188, 89, 90,
        91, 92, 193, 94, 95, 96, 97, 98, 99, 100
    };

    printf("Entier: ");
    int a = 0;
    scanf("%d", &a);

    int found = 0;
    int i = 0;
    do {
        if (entier[i] == a)
        {
            found = 1;
        }
        i++;
    } while (i < 100 && found == 0);

    if (found == 1)
    {
        printf("Found at index %d\n", i - 1);
    } else {
        printf("Not found\n");
    }

    return 0;
}
