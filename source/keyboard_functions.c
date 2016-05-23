#include <main.h>

void abc(){
    if(teclado==2 || teclado==3) {
        teclado=0;
    } else {
        teclado=2;
    }
}

void shift() {
    switch(teclado){
        case 0 :
            teclado=1;
            break;
        case 1 :
            teclado=0;
            break;
        case 2 :
            teclado=3;
            break;
        case 3 :
            teclado=2;
            break;
    }
}

int backspace() {
    if(write_kb==0){
        printf("\b \b");
        c_aux = calloc(write_kb--,sizeof(char));
        if(c_aux==NULL){
            printf(RED "Error allocating dynamic memory\n");
            closeApp=true;
            return 2;
        }
        for(int i=0;i<write_kb;i++){
            c_aux[i] = command[i];
        }
        command = c_aux;
        c_size--;
        //~ if(write_kb==0){can_delete=false;}
    }
    return 0;
}

char c;

int printf_kb(char let[5]) {
    switch(teclado){
        case 0 :
            c = let[0];
            break;
        case 1 :
            c = let[1];
            break;
        case 2 :
            c = let[2];
            break;
        case 3 :
            c = let[3];
            break;
    }
    printf("%c", c);
    c_aux = realloc(command,(c_size+1)*sizeof(char));
    if(c_aux==NULL){
        printf(RED "Error allocating dynamic memory\n");
        closeApp=true;
        return 2;
    }
    c_size++;
    command = c_aux;
    command[write_kb++] = c;
    //~ can_delete=true;
    return 0;
}

int enter(){
    //Process command
    printf("\n");
    char **tokens, **copy, **args;
    
    if(write_kb!=0){
        char *cmd = malloc(sizeof(char)*strlen(command));
        strcpy(cmd, command);
        copy = str_split(command, ' ');
        if (copy) {
            int num;
            
            for (num = 0; *(copy + num); num++) {
                #if DEBUG_MODE == 1
                    printf("copy[%i]: %s\n", num, *(copy+num));
                #endif
                free(*(copy + num));
            }
            free(copy);

            tokens = str_split(cmd, ' ');
            if(num>0) {
                args = malloc(sizeof(char*) * num-1);
                if(args==NULL){printf(RED "Error allocating dynamic memory\n"); closeApp=true; return 2;}
                
                for(int i=0;i<num;i++){
                    #if DEBUG_MODE == 1
                        printf("args[%i]: %s\n", i, *(tokens + (i+1)));
                    #endif
                    *(args + i)=*(tokens + (i+1));
                }
            } else {
                args = malloc(sizeof(char*));
            }
            num--;
            #if DEBUG_MODE == 1
                printf("num: %i\n", num);
            #endif
            if(strcmp(*tokens,"hello")==0){
                result = hello(num, args);
            } else if(strcmp(*tokens,"echo")==0){
                result = echo(num, args);
            } else if(strcmp(*tokens,"exit")==0 || strcmp(*tokens,"quit")==0){
                result = quit(num, args);
            } else if(strcmp(*tokens,"gpaulo")==0){
                result = gpaulo(num, args);
            //~ } else if(strcmp(*tokens,"pwd")==0){
                //~ result = pwd(num, args);
            } else if(strcmp(*tokens,"system")==0){
                result = sys(num, args);
            } else {
                printf(RED "%s: command not found\n", *tokens);
                result = -1;
            }
        }
    }
    write_kb = 0;
    c_size = 1;
    //~ can_delete=false;
    c_aux = calloc(1,sizeof(char));
    if(c_aux == NULL){
        printf(RED "Error allocating dynamic memory\n");
        closeApp = true;
        return 3;
    } else {
        command = c_aux;
    }
    printf(GREEN "# ");
    printf(WHITE);
    return 0;
}
