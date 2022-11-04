#include <stdio.h>


int main(int argc, char const *argv[])
{
    printf("Taille d'un char: %d\n", sizeof(char));
    printf("Taille d'un short: %d\n", sizeof(short));
    printf("Taille d'un int: %d\n", sizeof(int));
    printf("Taille d'un long: %d\n", sizeof(long));
    printf("Taille d'un long long: %d\n", sizeof(long long));
    printf("Taille d'un float: %d\n", sizeof(float));
    printf("Taille d'un double: %d\n", sizeof(double));
    printf("Taille d'un long double: %d\n", sizeof(long double));

    // Version signé
    printf("Taille d'un signed char: %d\n", sizeof(signed char));
    printf("Taille d'un signed short: %d\n", sizeof(signed short));
    printf("Taille d'un signed int: %d\n", sizeof(signed int));
    printf("Taille d'un signed long: %d\n", sizeof(signed long));
    printf("Taille d'un signed long long: %d\n", sizeof(signed long long));

    // Version non signé
    printf("Taille d'un unsigned char: %d\n", sizeof(unsigned char));
    printf("Taille d'un unsigned short: %d\n", sizeof(unsigned short));
    printf("Taille d'un unsigned int: %d\n", sizeof(unsigned int));
    printf("Taille d'un unsigned long: %d\n", sizeof(unsigned long));
    printf("Taille d'un unsigned long long: %d\n", sizeof(unsigned long long));

    return 0;
}