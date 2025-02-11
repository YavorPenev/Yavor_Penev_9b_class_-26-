#include <stdio.h>
//Явор 9б
#define SIZE(A,B) ((A>B) ? A:B)//тернарен оператор

int main()
{

int a=4,b=7;

    printf("%d",SIZE(a,b));


    return 0;
}    