/*
 * File: exo8.c
 * Created on Tue Nov 08 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a = 0x45;
    char *pa = &a;
    printf("Address of a: %p. Value of a: %c\n", pa, *pa);
    *pa = 0x46;
    printf("Address of a: %p. Value of a: %c\n", pa, *pa);

    short b = 0x1234;
    short *pb = &b;
    printf("Address of b: %p. Value of b: %d\n", pb, *pb);
    *pb = 0x1235;
    printf("Address of b: %p. Value of b: %d\n", pb, *pb);

    int c = 0x12345678;
    int *pc = &c;
    printf("Address of c: %p. Value of c: %d\n", pc, *pc);
    *pc = 0x12345679;
    printf("Address of c: %p. Value of c: %d\n", pc, *pc);

    long int d = 0x1234567890abcdef;
    long int *pd = &d;
    printf("Address of d: %p. Value of d: %ld\n", pd, *pd);
    *pd = 0x1234567890abcdf0;
    printf("Address of d: %p. Value of d: %ld\n", pd, *pd);

    long long int e = 0x1234567890abcdef;
    long long int *pe = &e;
    printf("Address of e: %p. Value of e: %lld\n", pe, *pe);
    *pe = 0x1234567890abcdf0;
    printf("Address of e: %p. Value of e: %lld\n", pe, *pe);

    float f = 3.14159265358979323846;
    float *pf = &f;
    printf("Address of f: %p. Value of f: %f\n", pf, *pf);
    *pf = 3.14159265358979323847;
    printf("Address of f: %p. Value of f: %f\n", pf, *pf);

    double g = 3.14159265358979323846;
    double *pg = &g;
    printf("Address of g: %p. Value of g: %f\n", pg, *pg);
    *pg = 3.14159265358979323847;
    printf("Address of g: %p. Value of g: %f\n", pg, *pg);

    long double h = 3.14159265358979323846;
    long double *ph = &h;
    printf("Address of h: %p. Value of h: %Lg\n", ph, *ph);
    *ph = 3.14159265358979323847;
    printf("Address of h: %p. Value of h: %Lg\n", ph, *ph);

    return 0;
}
