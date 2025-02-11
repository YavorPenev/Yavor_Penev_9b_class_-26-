#include <stdio.h>
#include "quadraticroots.h"
// Явор 9б
int main()
{
    int a = 2, b = -4, c = 2;
    findroots((double)a, (double)b, (double)c);
    printf("\nRoots:%d \n X1:%Lf \n X2:%Lf", result.norealroots, result.x1, result.x2);
    float a1 = 1.5, b1 = -3.2, c1 = 0.7;
    findroots((double)a1, (double)b1, (double)c1);
    printf("\nRoots:%d \n X1:%Lf \n X2:%Lf", result.norealroots, result.x1, result.x2);
    findroots((double)a1, (double)b1, (double)c1);
    double a2 = 1.35678101112, b2 = 0.35678910, c2 = 1.2345176987;
    findroots((double)a2, (double)b2, (double)c2);
    if (result.norealroots == 1)
    {
        printf("\nRoots:%d \n", result.norealroots);
        printf("No real roots!!!");
    }
    else
        printf("\nRoots:%d \n X1:%Lf \n X2:%Lf", result.norealroots, result.x1, result.x2);
    return 0;
}