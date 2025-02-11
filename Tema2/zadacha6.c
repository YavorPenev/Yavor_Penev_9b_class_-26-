#include <stdio.h>
//Явор 9б
#define SWAP(A,B,TYPE) TYPE OK;\
OK=A;\
A=B;\
B=OK;

#define SORT(ARRAY, SIZE, TYPE, COMPARE) TYPE i,j;\
 for(i=0;i<SIZE;i++)\
    {\
        for(j=i+1;j<SIZE;j++)\
        {\
            if(ARRAY[i] COMPARE ARRAY[j])\
            {\
                SWAP(ARRAY[i],ARRAY[j],TYPE);\
            }\
    }\
    }

int main()
{
int arr[]={1,4,7,2,9};
int n = sizeof(arr)/sizeof(arr[0]);

SORT(arr,n,int,<);

 for (int i=0;i<n;i++) 
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    return 0;
}    