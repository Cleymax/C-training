#include <stdio.h>

int main(void)
{
    int nombre1=6, nombre2=3, calcul;
    
    nombre2++;
    calcul = 3 * (nombre1 + nombre2) - 50;
    nombre1 *= nombre2;
    nombre2 += nombre2;
    printf("nombre1=%d\n", nombre1);
    printf("nombre2=%d\n", nombre2);
    printf("calcul=%d\n", calcul);
    return 0;
}