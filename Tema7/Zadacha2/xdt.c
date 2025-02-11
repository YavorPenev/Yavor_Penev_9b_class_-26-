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

    unsigned char room1 = 1 << 0;
    unsigned char room2 = 1 << 1;
    unsigned char room3 = 1 << 2;
    unsigned char room4 = 1 << 3;
    unsigned char room5 = 1 << 4;
    unsigned char room7 = 1 << 6;
    unsigned char room8 = 1 << 7;

    printn(lights);
    printn(room1);
    printf("---------------\n");
    printn((lights & ~(lights= 0<<(1))));
    //printn(lights | room1);
   // printn(lights ^ room1);
   // printn(~room1);
   // printf("---------------\n");
   // printn(lights & room2);
   // printn(lights | room2);
   // printn(lights ^ room2);
  //  printn(~room2);
    return 0;
}