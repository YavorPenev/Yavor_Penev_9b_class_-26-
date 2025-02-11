#include "quadraticroots.h"
#include <math.h>
#include <stdio.h>
// Явор 9б

QuadraticRootsResult findroots(double a, double b, double c)
{
    result.norealroots = 0;
    double d;
    d = (b * b) - (4 * a * c);
    if (d < 0)
    {
        result.norealroots = 1;
    }
    else if (d == 0)
    {
        result.x1 = (-b) / (2 * a);
        result.x2 = result.x1;
    }
    else
    {
        result.x1 = ((-b) + sqrtl(d)) / (2 * a);
        result.x2 = ((-b) - sqrtl(d)) / (2 * a);
    }
    return result;
}
