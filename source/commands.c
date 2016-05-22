#include "main.h"

int hello(){
    printf(CYAN "I'm the first command!\n");
    return 0;
}

int echo(char string[42]) {
    printf("%s\n", string);
    return 0;
}

int close() {
    printf(CYAN "Goodbye!\n");
    closeApp=true;
    return 0;
}

char msg[4][29] = {"It's my nick! :v",
                   "Here!",
                   "I known you? :)",
                   "Why you are reading this? :v"};
int gpaulo() {
    srand(time(NULL));
    int n = rand() % 5;
    printf(CYAN "%s\n", msg[n]);
    return 0;
}
