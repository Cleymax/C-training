#include <stdio.h>

void fibonacci(int u);

int main(int argc, char const *argv[])
{
    fibonacci(10);
    return 0;
}

void fibonacci(int n)
{
    int t1 = 0, t2 = 1;

    int next = t1 + t2;

    for (int i = 3; i <= n; i++)
    {
        printf("%d\n", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
}