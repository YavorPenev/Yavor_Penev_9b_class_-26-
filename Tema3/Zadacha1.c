#include<stdio.h>
//Явор 9б
#define DEBUG 1

void sort(int arr[], int n)
{
int i,j,c, sum=0;

#if DEBUG
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
          c=arr[i];
          arr[i]=arr[j];
          arr[j]=c;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%d,",arr[i]);
}

printf("\n");

for(i=0;i<n;i++)
{
    if(i%3==0)
     {
        printf("%d,",arr[i]);
        sum=sum+arr[i];
     }
}

printf("\n%d\n",sum);
#endif
}

int main()
{

int arr[]={5,1,8,3,6,0,2};
int n = sizeof(arr)/ sizeof(arr[0]);

sort(arr,n);

    return 0;
}