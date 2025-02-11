#ifndef  SCHOOLCLASS_H
#define  SCHOOLCLASS_H
//Явор 9б
#include "person.h"

typedef struct  {
    Person students[26];
    char Class;
    int class_number;
    Person teacher;
}SchoolClass;
#endif