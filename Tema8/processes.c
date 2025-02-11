#include "processes.h"
#include <stdio.h>
#include <string.h>
// Явор 9б
static int nextprocessid()
{
    if (processescount >= 5)
        return 0;
    return processescount + 1;
}

int createnewprocess(char name[])
{
    int id;
    id = nextprocessid();
    if (processescount >= MAX1)
        return 0;
    strcpy(processes[id - 1].name, name);
    processes[id - 1].id = id;
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
        processes[i - 1].id = i;
    }
    processescount--;
}

void listprocesses()
{
    for (int i = 1; i <= processescount; i++)
    {
        printf("%s:[%d]\n", processes[i - 1].name, processes[i - 1].id);
    }
}
