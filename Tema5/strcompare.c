#include <stdio.h>
#include "mystrings.h"
//Явор 9б
int main(int n, char **str)
{
    if (n<3) printf("You must enter at least two arguments");
    else printf("%d",strcompare(str[1],str[2]));
    return 0;
}

