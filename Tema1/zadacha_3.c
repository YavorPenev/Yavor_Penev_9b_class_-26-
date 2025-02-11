#include <stdio.h>

void bubblesort(int * arr, int arrlen);
int sortedevenindexesproduct(int *arr, int arrlen);

int main(void) {
  int array[5] = {1,9,3,2,5};
  int product = sortedevenindexesproduct(array, 5);
  printf("%d", product);
  return 0;
}

void bubblesort(int array[], int arrlen) {
  int sorted = 0;
  for (int i = 0; i < arrlen - 1 && !sorted; i++) {
    sorted = 1;
    for (int j = 0; j < arrlen - i - 1; j++) {
      if (array[j] > array[j+1]) {
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
        sorted = 0;
      }
    }
  }
}

int sortedevenindexesproduct(int array[], int arrlen) {
  bubblesort(array, arrlen);
  int product = 1;
  for (int i = 2; i < arrlen; i+=2) {
    product *=array[i];
 
  }
  return product;
}