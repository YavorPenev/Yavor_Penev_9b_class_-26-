#include<stdio.h>
#include<math.h>
//Явор 9б
#define ARRAY_SIZE 7

int main(){
#ifndef ARRAY_SIZE
 printf("Array size is not defined!!!\n");
#elif (ARRAY_SIZE<1)||(ARRAY_SIZE>10)
 printf("Array size is out of range!!!\n");
#else
    int arr[ARRAY_SIZE];
    for(int i=0;i<ARRAY_SIZE;i++){
        arr[i]=pow(2,i);
    }
    for(int i=0;i<ARRAY_SIZE;i++){
        printf("%d\n",arr[i]);
    }
#endif
    return 0;
}