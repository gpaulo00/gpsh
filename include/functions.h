// Funciones externas de todos los archivos

//general_functions.c
char** str_split(char* a_str, const char a_delim);
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
int enter();

//comands.c
int hello(int argc, char **argv);
int quit(int argc, char **argv);
int echo(int argc, char **argv);
int gpaulo(int argc, char **argv);
//~ int pwd(int argc, char **argv);
int sys(int argc, char **argv);
