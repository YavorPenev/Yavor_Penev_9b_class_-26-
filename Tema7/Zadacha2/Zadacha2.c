#include <stdio.h>
// Явор 9б

void printn(unsigned char n)
{
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--)
    {
        printf("%u", (n >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int n, a;
    unsigned char lights = 0;

    printf("To chose option: Enter the number.\n");
    printf("1)Switch rooms\n");
    printf("2)Print state\n");
    printf("3)Exit\n");
    while (1)
    {
        printf("------------------------------------\n");
        printf("Enter number (1-3):");
        scanf("%d", &n);
        printf("------------------------------------\n");

        if (n == 3)
            break;
        else if (n == 1)
        {
            printf("Enter number of room (1-8):");
            scanf("%d", &a);
            lights = lights ^ (1 << (a - 1));
        }
        else if (n == 2)
            printn(lights);
    }

    return 0;
}
