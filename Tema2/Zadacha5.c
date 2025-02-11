#include <stdio.h>
//Явор 9б
#define SWAP(A,B,TYPE){\
TYPE C;\
C=A;\
A=B;\
B=C;}


int main()
{
int a=3,b=6;
SWAP(a,b,int);
printf("%d,%d\n",a,b);

float x=1.4,y=2.5;
SWAP(x,y,float);
printf("%.2f,%.2f\n",x,y);

double z=1.454534,j=2.51232312;
SWAP(z,j,double);
printf("%lf,%lf\n",z,j);

char c='a',d='b';
SWAP(c,d,char);
printf("%c,%c\n",c,d);

    return 0;
}    

