#include <main.h>

void abc(int *kb){
    if(*kb==2 || *kb==3) {
        *kb=0;
    } else {
        *kb=2;
    }
}

void shift(int *kb) {
    switch(*kb){
        case 0 :
            *kb=1;
            break;
        case 1 :
            *kb=0;
            break;
        case 2 :
            *kb=3;
            break;
        case 3 :
            *kb=2;
            break;
    }
}

void backspace() {
    if(write_kb > 0) {printf("\b \b");}
}
    
void printf_kb(char let[5], int kb) {
    switch(kb){
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
