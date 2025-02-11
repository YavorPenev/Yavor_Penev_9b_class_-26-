#include <limits.h>
#include <stdio.h>

//Явор 9б
#define FORMAT "%-20s %-20s %-20s %-20s %-20s %-20s %-20s"
#define FORMAT1 "\n%-20s %-20s %-20zu %-20ld %-20ld %-20s %-20lu"
#define FORMAT2 "\n%-20s %-20s %-20zu %-20lld %-20lld %-20s %-20llu"

int main() {
  printf(FORMAT, "Name", "Format", "Size", "Max", "Min", "un_Format", "un_Max");
  printf(FORMAT1, "char", "%c", sizeof(char), CHAR_MAX, CHAR_MIN, "%u",
         UCHAR_MAX);
  printf(FORMAT1, "short", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, "%hu",
         USHRT_MAX);
  printf(FORMAT1, "int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);
  printf(FORMAT1, "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu",
         ULONG_MAX);
  printf(FORMAT2, "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN,
         "%llu", ULLONG_MAX);

  return 0;
}