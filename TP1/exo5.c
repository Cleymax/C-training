#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a= 15;
    int b = 3;

    printf("a = %d et b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // opérateur logique
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    // opérateur arithmétique
    printf("a++ = %d\n", a++);
    printf("a-- = %d\n", a--);
    printf("++a = %d\n", ++a);
    printf("--a = %d\n", --a);

    return 1;
}
