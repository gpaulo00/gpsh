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
    if(write_kb > 0) {
        printf("\b \b");
        write_kb--;
        c_aux = realloc(command,(c_size-1)*sizeof(char));
        if(c_aux==NULL){
            closeApp=true;
            return 2;
        }
        command = c_aux;
        c_size--;
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
        closeApp=true;
        return 2;
    }
    c_size++;
    command = c_aux;
    command[write_kb++] = c;
    return 0;
}

void enter(){
    //Process command
    printf("\n");
    if(prefix("hello",command)) {
        result = hello();
    //~ } else if(prefix("echo",command)) {
        //~ strncpy(args, command+5, 42);
        //~ result = echo();
    //~ }
    }else if(prefix("exit",command)) {
        result = close();
    }else if(prefix("gpaulo",command)) {
        result = gpaulo();
    }else if(write_kb==0){
        
    } else {
        printf(RED "Command not found\n");
        printf(WHITE);
        result = -1;
    }
    write_kb = 0;
    c_size = 1;
    c_aux = malloc(sizeof(char));
    if(c_aux == NULL){
        closeApp=true;
    } else {
        command = c_aux;
        printf(GREEN "# ");
        printf(WHITE);
    }
}
