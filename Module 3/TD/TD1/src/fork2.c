#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int i;

    for (i=0; i<3; i++)
        fork();

    printf("hello world!\n");
    return 0;
}