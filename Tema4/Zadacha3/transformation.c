#include "transformation.h"
#include <string.h>

//Явор 9б клас
transformation transfer(char input[])
{
 int i=0,sign;
transformation transf;
transf.error[0]=0;
transf.result=0;

if (input[0]=='+') 
  {
  i++;
  sign=1;
  }

if (input[0]=='-') 
  {
  i++;
  sign=-1;
  }


 for(;input[i]!='\0';i++)
   {

   if ((input[i]!='0')&&(input[i]!='1')&&(input[i]!='2')&&(input[i]!='3')&&(input[i]!='4')&&(input[i]!='5')&&(input[i]!='6')&&(input[i]!='7')&&(input[i]!='8')&&(input[i]!='9'))
    {
      strcpy(transf.error,"Invalid input string");
      transf.result=0L;
      break;
    } else {
      transf.result*=10L;
      transf.result+=input[i]-'0';
    }
   }
  
   transf.result*=sign;
 return transf;
}