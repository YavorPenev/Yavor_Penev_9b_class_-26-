#include <stdio.h>
#include <string.h>
//Явор 9б
void print1(char string[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", string[i]);
    }
}

int main()
{
    char string[21];

    printf("Enter elements of string:");
    fgets(string, sizeof(string), stdin);
    char *p = strchr(string, '\n');
    *p = '\0';
    print1(string, 21);
    return 0;
}