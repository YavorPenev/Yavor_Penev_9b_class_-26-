#include <stdio.h>
//Явор 9б
#define SIZE(A) printf("%d, %s, %d, %s;",A,#A,__LINE__,__FILE__); 

int main()
{
int a=4;

SIZE(a);   

    return 0;
}    