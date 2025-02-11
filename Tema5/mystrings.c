#include <stdio.h>
#include "mystrings.h"
//Явор 9б
//#include <string.h>

int strlength(char str[])
{
    //if (str==NULL) return 0;
   //return strlen(str);
    int size=0,i;

    for(i=0;str[i]!='\0';i++) size++;

    return size;
}

char* strconcat(char str[], char str1[])
{
    //strcat(str,str1);
    int i=0,j=0;

    while (str[i]!='\0') 
    {
        i++;
    }

    while (str1[j]!='\0')
    {
        str[i]=str1[j];
        i++;
        j++;
    }
    str[i]='\0';

    return str;

}

int strcompare(char str[], char str1[])
{
    //return strcmp(str,str1);
     int i=0;

    while (str[i]!='\0' || str1[i]!='\0')
    {
        if (str[i]>str1[i]) return 1;
        if (str[i]<str1[i]) return -1;
        i++;
    }
   
    return 0;
}

