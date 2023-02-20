#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

    if (fork() == 0)
    {
        execlp("top", "top", NULL);
        perror("execlp");
        exit(1);
    }

    if (fork() == 0)
    {
        execlp("ps", "ps", NULL);
        perror("execlp");
        exit(1);
    }

    return 0;
}