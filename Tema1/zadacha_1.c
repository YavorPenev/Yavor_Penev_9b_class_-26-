#include <stdio.h>
//Явор9б
void printcharsonnewline(char input[]);

int main() {
  char input[] = "someString";
  printcharsonnewline(input);

  return 0;
}

void printcharsonnewline(char input[]) {
  for (int index = 0; input[index] != '\0'; index++) {
    char currentchar = input[index];
    printf("%c\n", currentchar);
  }
}