#include <stdio.h>
#include <math.h>
//Явор 9б клас
int main()
{
 long arr[]={1,2,0};
 int n = sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<n;i++)
 {
    arr[i]=pow(arr[i],4);
 }

  for(int i=0;i<n;i++)
 {
    printf("%ld,", arr[i]);
 }


    return 0;
}