#include<stdio.h>
//Явор 9б
void Select(int arr[],int n)
{
    int i,j,c;
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
}
void Bubble(int arr[],int n)
{
    int i,j,c;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
}
void Insert(int arr[],int n)
{
    int i,j,c;
    for(i=1;i<n;i++)
    {
        c=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>c)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=c;
    }
    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
}
int main()
{       
    int arr[]={1,7,3,9,0,2};                                                                                                           
    int n=sizeof(arr)/sizeof(arr[0]);
    #if _WIN32
        Bubble(arr,n);
    #elif __linux__
        Select(arr,n);
    #elif __APPLE__
        Insert(arr,n);
    #else
    {
        for(int i=0;i<n/2;i++)
        {
            int temp=arr[n-1-i];
            arr[n-1-i]=arr[i];
            arr[i]=temp;
        }
        for(int i=0;i<n;i++)
        {
            printf("%d,",arr[i]);
        }
    }
    #endif
    return 0;
}