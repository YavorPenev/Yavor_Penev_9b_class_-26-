#include "safeint.h"
#include <stdio.h>
// Явор 9б

int main(int argv, char **argc)
{
    if (argv != 3)
        printf("Enter only two numbers!!!");
    else
    {
        int a, b;
        SafeResult result;
        result = safestrtoint(argc[1]);
        if (result.errorflag == 1)
        {
            printf("Your's first number is incorrect!!!");
            return 1;
        }
        a = result.value;
        result = safestrtoint(argc[2]);
        if (result.errorflag == 1)
        {
            printf("Your's first number is incorrect!!!");
            return 1;
        }
        b = result.value;
        result = safemultiply(a, b);
        printf("Result(a*b):%d Error:%d", result.value, result.errorflag);
    }
    return 0;
}
