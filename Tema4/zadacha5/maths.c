#include "maths.h"
//Явор 9б клас
long fact(int number)
{
    long result=1;
    int i;
    
    for(i=0;i<number;i++)
     {
       result=result*(i+1);
     }
    

    return result;
}