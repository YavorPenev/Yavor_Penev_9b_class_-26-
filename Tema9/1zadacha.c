#include <stdio.h>
//Явор 9б
int main()
{
    double a, b;

    printf("Enter a(double):");
    scanf("%lf", &a);
    printf("\nEnter b(double):");
    scanf("%lf", &b);

    double *p1 = &a;
    double *p2 = &b;

    printf("Adress of p1:%p", p1);
    printf("\nAdress of p2:%p", p2);

    printf("\na:%lf", *p1);
    printf("\nb:%lf", *p2);

    return 0;
}