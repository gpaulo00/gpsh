// Funciones externas de todos los archivos

//general_functions.c
char** str_split(char* a_str, const char a_delim);
bool touchInBox(touchPosition touch, int x, int y, int w, int h);
void prompt();
//~ bool prefix(const char *pre, const char *str);
//~ char * getargs(char string[47], int lcom);

//keyboard.c
void keyboard(touchPosition touch);

//keyboard_functions.c
int up_history();
int down_history();
void abc();
void shift();
int backspace();
int printf_kb(char let[5]);
int enter();
