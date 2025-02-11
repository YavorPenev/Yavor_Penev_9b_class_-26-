
#include "safeint.h"
#include <limits.h>
// Явор 9б
SafeResult safestrtoint(char str[])
{
    int i = 0;
    int sign = 1;
    long long l;

    SafeResult result;
    result.errorflag = 0;
    result.value = 0;

    if (str[0] == '-')
    {
        i++;
        sign = -1;
    }
    if (str[0] == '+')
    {
        i++;
    }

    while (str[i] != '\0')
    {
        if ((str[i] < '0') || (str[i] > '9'))
        {
            result.errorflag = 1;
            break;
        }
        else
        {
            l = (unsigned long long)result.value * 10 + (str[i] - '0');
            // if(util(sign,l)){result.errorflag=1; break; }
            if (l > INT_MAX)
            {
                result.errorflag = 1;
                break;
            }
            result.value = l;
        }
        i++;
    }
    if (l * sign < INT_MIN)
        result.errorflag = 1;
    result.value *= sign;
    return result;
}

SafeResult safeadd(int a, int b)
{
    SafeResult result;
    result.errorflag = 0;
    long long temp = (long long)a + (long long)b;
    if (temp > INT_MAX || temp < INT_MIN)
        result.errorflag = 1;
    else
        result.value = (int)temp;
    return result;
}

SafeResult safedivide(int a, int b)
{
    SafeResult result;
    result.errorflag = 0;

    if (b == 0)
    {
        result.errorflag = 1;
    }
    else
    {
        long long temp = (long long)a / (long long)b;
        if (temp > INT_MAX || temp < INT_MIN)
            result.errorflag = 1;
        else
            result.value = (int)temp;
    }
    return result;
}

SafeResult safesubtract(int a, int b)
{
    SafeResult result;
    result.errorflag = 0;
    long long temp = (long long)a - (long long)b;
    if (temp > INT_MAX || temp < INT_MIN)
        result.errorflag = 1;
    else
        result.value = (int)temp;
    return result;
}

SafeResult safemultiply(int a, int b)
{
    SafeResult result;
    result.errorflag = 0;
    long long temp = (long long)a * (long long)b;
    if (temp > 0 && util(1, temp))
        result.errorflag = 1;
    else if (temp < 0 && util(-1, temp))
        result.errorflag = 1;
    else
        result.value = (int)temp;
    return result;
}

int util(int sign, long long l)
{
    if ((sign > 0 && l > INT_MAX) || (sign < 0 && l < INT_MIN))
    {
        return 1;
    }
    return 0;
}
