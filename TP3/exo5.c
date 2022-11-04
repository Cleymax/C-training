/*
 * File: exo5.c
 * Created on Fri Nov 04 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int table[100] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
        51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
        71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
        81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
        91, 92, 93, 94, 95, 96, 97, 98, 99, 100
    };

    //recherche dichotomique

    int min = 0;
    int max = 99;
    int middle = 0;
    int found = 0;

    int a = 0;
    printf("Entier: ");
    scanf("%d", &a);

    while (min <= max && found == 0)
    {
        middle = (min + max) / 2;
        if (table[middle] == a)
        {
            found = 1;
        } else {
            if(table[middle] > a){
                max = middle - 1;
            } else {
                min = middle + 1;
            }
        }
    }

    if (found == 1)
    {
        printf("Found at index %d\n", middle);
    } else {
        printf("Not found\n");
    }


    return 0;
}
