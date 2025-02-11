#include "processes.h"
#include <stdio.h>
#include <string.h>
//Явор 9б
static int nextprocessid(void)
{
    for (int i = 1; i <= MAX1; i++)
    {
        int ok = 0;
        for (int j = 0; j < processescount; j++)
        {
            if (processes[j].id == i)
            {
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            return i;
    }
    return 0;
}

int createnewprocess(char name[])
{
    int id = nextprocessid();
    if (processescount >= MAX1)
        return 0;

    strcpy(processes[processescount].name, name);
    processes[processescount].id = id;

    processescount++;
    return id;
}

void stopprocess(int id)
{
    if (id > processescount)
        return;

    for (int i = id; i < processescount; i++)
    {
        strcpy(processes[i - 1].name, processes[i].name);
        processes[i - 1].id = processes[i].id;
    }
    processescount--;
}

void listprocesses()
{
    for (int i = 0; i < processescount; i++)
    {
        printf("%s:[%d]\n", processes[i].name, processes[i].id);
    }
}
