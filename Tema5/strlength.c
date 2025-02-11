#include <stdio.h>
#include "mystrings.h"
//Явор 9б
int main(int n, char **str)
{
    if (n>2) printf("You must enter only one arguments");
    else printf("%d",strlength(str[1]));
    return 0;
}