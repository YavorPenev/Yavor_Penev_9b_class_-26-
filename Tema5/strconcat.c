#include <stdio.h>
#include "mystrings.h"
#include <string.h>
//Явор 9б
#define MAX 50

int main(int n, char **str)
{
    if (n<3) printf("You must enter at least two arguments");
    else {
      int i=strlen(str[1]);
      int j=strlen(str[2]);  
      if ((i>MAX)||(j>MAX)||(i+j>MAX)) printf("Length must be under %d symbols",MAX+1);
      else printf("%s",strconcat(str[1],str[2]));
    } 
    return 0;
}