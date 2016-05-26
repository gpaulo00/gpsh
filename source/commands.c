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

int help(int argc, char **argv) {
    printf("Built-in commands:\n\
  system   Show the system version\n\
  echo     Display a line of text\n\
  help     Display this information\n\
  hello    The first command implemented\n\
  gpaulo   My command :v\n");
    return 0;
}

int set(int argc, char **argv){
    for(int i=0; i<var_used; i++){
        printf("%s=%s\n", var_names[i], var_values[i]);
    }
    return 0;
}
