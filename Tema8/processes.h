#ifndef PROCESSES_H
#define PROCESSES_H
//Явор 9б
#define MAX1 5
#define LENGTH1 30

typedef struct
{
    int id;
    char name[LENGTH1 + 1];
} Process;

extern Process processes[MAX1];
extern int processescount;
int createnewprocess(char name[]);
void stopprocess(int id);
void listprocesses();
#endif