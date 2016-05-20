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

void backspace() {
    if(write_kb > 0) {printf("\b \b"); write_kb--; }
}
    
void printf_kb(char let[5]) {
    switch(teclado){
        case 0 :
            printf("%c", let[0]);
            break;
        case 1 :
            printf("%c", let[1]);
            break;
        case 2 :
            printf("%c", let[2]);
            break;
        case 3 :
            printf("%c", let[3]);
            break;
    }
    write_kb++;
}
