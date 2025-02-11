#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "processes.h"
int processescount;
Process processes[];
//Явор 9б
int main()
{
    int a = 0;
    char name[LENGTH1 + 1];
    int id;
    while (1)
    {
        printf("\n*****************************************************************\n");
        printf("If you want to use one of this functions enter: 1 or 2 or 3 or 4.\n\n");
        printf("1)Add process\n");
        printf("2)Stop process\n");
        printf("3)Print list\n");
        printf("4)Exit\n");
        printf("Enter function number:");
        scanf("%d", &a);
        system("cls");
        if (a == 4)
        {
            printf("Thank you for using our app.");
            break;
        }
        switch (a)
        {
        case 1:
            printf("Add process\n");
            printf("Enter name of process:");
            scanf("%s", &name);
            createnewprocess(name);
            break;
        case 2:
            printf("Stop process");
            printf("Enter id of process:");
            scanf("%d", &id);
            stopprocess(id);
            break;
        case 3:
            printf("Print list:\n");
            listprocesses();
            break;
        default:
            printf("You entered the wrong function number!!!");
            break;
        }
        printf("\n");
        getche();
    }
    return 0;
}