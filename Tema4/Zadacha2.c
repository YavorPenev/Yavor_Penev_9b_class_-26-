#include<stdio.h>
//Явор 9б клас
int main()
{
   int a=12,b=24;
   int LCM1=a,LCM2=b;

 while(1)
{

 if(LCM1>LCM2)
{
 LCM2=LCM2+b;
} 
 else if(LCM1<LCM2)
{
 LCM1=LCM1+a;
}
 else 
{
 printf("%d",LCM1); break;
}
}

    return 0;
}