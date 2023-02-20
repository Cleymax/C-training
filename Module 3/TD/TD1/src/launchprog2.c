#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s command [arg] [arg ...]\n", argv[0]);
        return EXIT_FAILURE;
    }

    execvp(argv[1], argv +1);
    perror("execvp");    

    return EXIT_SUCCESS;
}
