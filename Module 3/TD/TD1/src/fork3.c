#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
    if (fork())
        fork();

    printf("hello world\n");
    return 0;
}