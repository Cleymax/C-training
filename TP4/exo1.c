/*
 * File: exo1.c
 * Created on Sat Nov 05 2022
 * Author: Clément PERRIN
 */

#include <stdio.h>
#include "exo1.h"

int main(int argc, char const *argv[])
{
    unsigned char op = '+';
    int a, b;

    printf("Entrez une opération (Ex 5 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    int resultat;

    switch (op)
    {
    case '+':
        resultat = somme(a, b);
        break;
    case '-':
        resultat = difference(a, b);
        break;
    case '*':
        resultat = produit(a, b);
        break;
    case '/':
        resultat = quotient(a, b);
        break;
    case '%':
        resultat = modulo(a, b);
        break;
    case '&':
        resultat = et(a, b);
        break;
    case '|':
        resultat = ou(a, b);
        break;
    case '~':
        resultat = negation(a);
        break;
    default:
        printf("Opération non reconnue !\n");
        return 1;
    }

    printf("Résultat: %d\n", resultat);

    return 0;
}

int somme(int a, int b)
{
    return a + b;
}

int produit(int a, int b)
{
    return a * b;
}

int difference(int a, int b)
{
    return a - b;
}

int quotient(int a, int b)
{
    return (int) a / b;
}

int modulo(int a, int b)
{
    return a % b;
}

int et(int a, int b)
{
    return a & b;
}

int ou(int a, int b)
{
    return a | b;
}

int negation(int a)
{
    return ~a;
}