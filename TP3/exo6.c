/*
 * File: exo6.c
 * Created on Sat Nov 05 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

    short a = 22;
    short *ap = &a;

    int b = 123;
    int *bp = &b;

    long int c = 123456789;
    long int *cp = &c;

    float d = 3.14;
    float *dp = &d;

    double e = 3.14159265358979323846;
    double *ep = &e;

    long double f = 3.14159265358979323846;
    long double *fp = &f;

    unsigned char *cptr;
    cptr = (unsigned char *)ap;

    for (int i = 0; i < sizeof(short); i++)
        printf("%d eme octet = %hhx \n", i + 1, *(cptr + i));
    printf("\n");

    cptr = (unsigned char *)bp;

    for (int i = 0; i < sizeof(int); i++)
        printf("%d eme octet = %hhx \n", i + 1, *(cptr + i));
    printf("\n");

    cptr = (unsigned char *)cp;

    for (int i = 0; i < sizeof(long int); i++)
        printf("%d eme octet = %hhx \n", i + 1, *(cptr + i));
    printf("\n");

    cptr = (unsigned char *)dp;

    for (int i = 0; i < sizeof(float); i++)
        printf("%d eme octet = %hhx \n", i + 1, *(cptr + i));
    printf("\n");

    cptr = (unsigned char *)ep;

    for (int i = 0; i < sizeof(double); i++)
        printf("%d eme octet = %hhx \n", i + 1, *(cptr + i));
    printf("\n");

    cptr = (unsigned char *)fp;

    for (int i = 0; i < sizeof(long double); i++)
        printf("%d eme octet = %hhx \n", i + 1, *(cptr + i));
    printf("\n");

    return 0;
}
