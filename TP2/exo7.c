#include <stdio.h>

struct Color
{
    short red;
    short green;
    short blue;
};

int main(int argc, char const *argv[])
{
    struct Color colors[10] =
        {
            {255, 255, 255},
            {255, 0, 255},
            {255, 255, 0},
            {0, 0, 255},
            {255, 0, 0},
            {0, 255, 0},
            {50, 255, 255},
            {255, 50, 255},
            {255, 255, 50},
            {255, 50, 50}};

    return 0;
}
