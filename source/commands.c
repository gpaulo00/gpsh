#include "main.h"

/*
Command declaration:
int name_of_command(int argc, char **argv){}
*/

int hello(int argc, char **argv){
    printf(CYAN "I'm the first command!\n");
    return 0;
}

int echo(int argc, char **argv) {
    for(int i=0;i<argc;i++){
        printf("%s ", *(argv+i));
    }
    printf("\n");
    return 0;
}

int quit(int argc, char **argv) {
    printf(CYAN "Goodbye!\n");
    closeApp=true;
    return 0;
}

//~ int pwd(int argc, char **argv) {
    //~ system("pwd");
    //~ return 0;
//~ }

int sys(int argc, char **argv){
    char final[20];
    osGetSystemVersionDataString(NULL,NULL,final,20);
    printf("%s",final);
    return 0;
}
char msg[4][29] = {"It's my nick! :v",
                   "Here!",
                   "I known you? :)",
                   "Why you are reading this? :v"};
int gpaulo(int argc, char **argv) {
    int n = rand() % 4;
    printf(CYAN "%s\n", msg[n]);
    return 0;
}
