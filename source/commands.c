#include "main.h"

int hello(){
    printf("I'm the first command!\n");
    return 0;
}

int echo(char string[42]) {
    printf("%s\n", string);
    return 0;
}

int close() {
    printf("Goodbye!\n");
    closeApp=true;
    return 0;
}
