// Funciones externas de todos los archivos

//general_functions.c
bool touchInBox(touchPosition touch, int x, int y, int w, int h);
void prompt();
bool prefix(const char *pre, const char *str);
//~ char * getargs(char string[47], int lcom);

//keyboard.c
void keyboard(touchPosition touch);

//keyboard_functions.c
void abc();
void shift();
int backspace();
int printf_kb(char let[5]);
void enter();

//comands.c
int hello();
int close();
int echo(char string[42]);
int gpaulo();
