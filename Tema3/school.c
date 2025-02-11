#include <stdio.h>
#include "schoolclass.h"
#include "schoolroom.h"
#include <string.h>
//Явор 9б

typedef struct {
    SchoolClass classes[20];
    SchoolRoom rooms[10];
} School;

int main() {
 
School school;
School *p;
    p=&school;
    strcpy(p->classes[0].students[0].name,"1");
    printf("School structure is defined.\n");
    printf(school.classes[0].students[0].name);
    return 0;
}