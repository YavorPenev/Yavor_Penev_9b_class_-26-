#include <stdio.h>
//Явор 9б
void swap(void* p1,void*  p2)
{
  int a = *((int *)p1);
  *((int *)p1) = *((int *)p2);
  *((int *)p2) = a;
}

int main()
{
  int a = 1;
  int b = 2;
  void *p1 = &a;
  void *p2 = &b;

  printf("Swap:%d,%d", a, b);

  swap(p1, p2);

  printf("Swap:%d,%d", a, b);
  return 0;
}