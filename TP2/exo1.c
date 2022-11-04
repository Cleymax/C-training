#include <stdio.h>

void puissance(int a, int b);

int main(int argc, char const *argv[])
{
    puissance(2, 3);
    return 0;
}

void puissance(int a, int b)
{
    int result = 1;

    for (int i = 0; i < b; i++)
    {
        result *= a;
    }

    printf("%d\n", result);
}
