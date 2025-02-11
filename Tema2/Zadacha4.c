#include <stdio.h>
//Явор 9б
#define COMMAND(NAME,TYPE)TYPE ##_## NAME ## _command
#define DEFINE_COMMAND(NAME,TYPE) void COMMAND(NAME,TYPE)(void)

DEFINE_COMMAND(zdr,edno){
    printf("HEllo1;\n");
}

DEFINE_COMMAND(zdr,dwe){
    printf("HEllo2;");
}


int main()
{
edno_zdr_command();
dwe_zdr_command();

    return 0;
}    