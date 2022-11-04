#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1 = 1;
    int num2 = 2;
    char op = '*';

    switch (op)
    {
    case '/':
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '%':
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
        break;
    case '&':
        printf("%d & %d = %d\n", num1, num2, num1 & num2);
        break;
    case '|':
        printf("%d | %d = %d\n", num1, num2, num1 | num2);
        break;
    default:
        printf("Non trouve");
        break;
    }

    return 1;
}
