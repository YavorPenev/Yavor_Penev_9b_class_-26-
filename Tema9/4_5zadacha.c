#include <stdio.h>
//Явор 9б
void bubblesort(int arr[], int N,int (*compare)(const void*,const  void*),void (*swapelements)(const void*,const  void*) )
{
for(int i=0;i<N-1;i++)
{
    for(int j=0;j<N-i-1;j++)
    {
        if(compare(&arr[j],&arr[j+1])>0)
        {
            swapelements(&arr[j],&arr[j+1]);
        }
    }
}
}

int compareasc(const void* p1,const void* p2)
{
if(*((int*)p1)>*((int*)p2)) return 1;
else if(*((int*)p1)==*((int*)p2)) return 0;
else return -1;
}

int comparedesc(const void* p1,const void* p2)
{
if(*((int*)p1)<*((int*)p2)) return 1;
else if(*((int*)p1)==*((int*)p2)) return 0;
else return -1;
}

void swap(const void* p1, const void*p2)
{
    int a = *((int *)p1);
    *((int *)p1) = *((int *)p2);
    *((int *)p2) = a;
  }

  void print1(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int arr[]={1,6,3,4,9,13,2};
    int N = sizeof(arr)/sizeof(arr[0]);

    // const int a =23;
    // const int b = -23;

    // const void* p1=&a;
    // const void* p2=&b;

    //printf("%d\n",compareasc(p1,p2));
    // printf("%d\n",comparedesc(p1,p2));

    printf("Compareasc:");
    bubblesort(arr,N,compareasc,swap);
    print1(arr,N);
    printf("\nComparedesc:");
    bubblesort(arr,N,comparedesc,swap);
    print1(arr,N);

    return 0;
}