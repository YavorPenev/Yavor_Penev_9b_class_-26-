#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//Явор 9б
int main()
{
    char str[101],str1[51],str2[113];
    int a=0;
while(1)
  {
    
    system("cls");    
    printf("\n*****************************************************************\n");
    printf("If you want to use one of this functions enter: 1 or 2 or 3 or 4.\n\n");
    printf("1)strlength - finds size of a string\n");
    printf("2)strconcat - combines two strings\n");
    printf("3)strcompare - compares two strings\n");
    printf("4)exit - exit from the app\n");
    printf("Enter function number:");
    scanf("%d",&a);
    printf("\n*****************************************************************\n");

     if(a==4) 
     {
        printf("Thank you for using our app."); break;
     }  
    switch(a)
    {
       case 1: 
        printf("1)strlength:");
        scanf("%s",&str);
        strcpy(str2,"strlength.exe ");
        strcat(str2,str);
        break;
       case 2:
        printf("2)strconcat:");
        scanf("%s",&str);
        scanf("%s",&str1);
        strcpy(str2,"strconcat ");
        strcat(str2,str);
        strcat(str2," ");
        strcat(str2,str1);
        break;
       case 3:
        printf("3)strcompare:");
        scanf("%s",&str);
        scanf("%s",&str1);
        strcpy(str2,"strcompare ");
        strcat(str2,str);
        strcat(str2," ");
        strcat(str2,str1);
        break;
        default: 
        printf("You entered the wrong function number!!!");
        getche();
        continue;
        break;
    }
    printf("\n");
    system(str2);
   getche();
  }

    return 0;
}