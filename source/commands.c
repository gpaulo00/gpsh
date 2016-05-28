#include "main.h"

/*
Command declaration:
int name_of_command(int argc, char **argv){}

Example set(2, ["set", "AUTHOR=gpaulo00"]);
*/

int hello(int argc, char **argv){
    printf(CYAN "I'm the first command!\n");
    return 0;
}

int echo(int argc, char **argv) {
    for(int i=1;i<argc;i++){
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
    if(argc == 2){
        char **tmp, **tokens, *buf;
        //~ printf("%s;%i\n", argv[0],strlen(argv[0]));
        buf = calloc(strlen(argv[1]),sizeof(char));
        if(buf==NULL){printf(RED "Error allocating dynamic memory in set()\n"); closeApp=true; return 2;}
        strcpy(buf, argv[1]);
        tmp = str_split(argv[1], '=');
        if(tmp){
            int num;
            for (num = 0; *(tmp + num); num++) {
                #if DEBUG_MODE == 1
                    printf("tmp[%i]: %s\n", num, *(tmp+num));
                #endif
                free(*(tmp + num));
            }
            #if DEBUG_MODE == 1
                printf("num: %i\n", num);
            #endif
            if(num!=2){ return 5; }
            tokens = str_split(buf, '=');
            if(exist_variable(tokens[0]) != -1){
                unset_variable(tokens[0]);
            }
            set_variable(tokens[0], tokens[1]);
            //~ free(tokens);
        }
        free(tmp);
    } else {
        for(int i=0; i<var_used; i++){printf("%s=%s\n", var_names[i], var_values[i]);}
    }
    return 0;
}

int unset(int argc, char **argv){
    if(argc==2){
        unset_variable(argv[1]);
    }
    return 0;
}
