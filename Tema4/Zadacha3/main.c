#include <stdio.h>
#include "transformation.h"
//Явор 9б клас
int main()
{
char input[]="-12-3";
transformation transf;
    transf=transfer(input);
    printf("Result of %s is: %ld\n",input,transf.result);
    printf("Error is: %s",transf.error);

    return 0;
}