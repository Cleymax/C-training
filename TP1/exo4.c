#include <stdio.h>


int main(int argc, char const *argv[])
{
    char c = 'a';
    short s = 10;
    int i = 10;
    long l = 10;
    long long ll = 10;
    float f = 10.0;
    double d = 10.0;
    long double ld = 10.0;

    // Version signé
    signed char sc = 'a';
    signed short ss = 10;
    signed int si = 10;
    signed long sl = 10;
    signed long long sll = 10;

    // Version non signé
    unsigned char uc = 'a';
    unsigned short us = 10;
    unsigned int ui = 10;
    unsigned long ul = 10;
    unsigned long long ull = 10;

    // Affichage de la variable
    printf("La variable c est de type %s et vaut %c\n", "char", c);
    printf("La variable s est de type %s et vaut %d\n", "short", s);
    printf("La variable i est de type %s et vaut %d\n", "int", i);
    printf("La variable l est de type %s et vaut %ld\n", "long", l);
    printf("La variable ll est de type %s et vaut %lld\n", "long long", ll);
    printf("La variable f est de type %s et vaut %f\n", "float", f);
    printf("La variable d est de type %s et vaut %f\n", "double", d);
    printf("La variable ld est de type %s et vaut %Lf\n", "long double", ld);
    printf("La variable sc est de type %s et vaut %c\n", "signed char", sc);
    printf("La variable ss est de type %s et vaut %d\n", "signed short", ss);
    printf("La variable si est de type %s et vaut %d\n", "signed int", si);
    printf("La variable sl est de type %s et vaut %ld\n", "signed long", sl);
    printf("La variable sll est de type %s et vaut %lld\n", "signed long long", sll);
    printf("La variable uc est de type %s et vaut %c\n", "unsigned char", uc);
    printf("La variable us est de type %s et vaut %d\n", "unsigned short", us);
    printf("La variable ui est de type %s et vaut %d\n", "unsigned int", ui);
    printf("La variable ul est de type %s et vaut %ld\n", "unsigned long", ul);
    printf("La variable ull est de type %s et vaut %lld\n", "unsigned long long", ull);
}