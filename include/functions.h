// Funciones externas de todos los archivos

//general_functions.c
char** str_split(char* a_str, const char a_delim);
char *replace_str(char *str, char *orig, char *rep);
bool touchInBox(touchPosition touch, int x, int y, int w, int h);
void prompt();
//~ bool prefix(const char *pre, const char *str);
//~ char * getargs(char string[47], int lcom);

//variables.c
int set_variable(char *name, char *value);
int unset_variable(char *name);
int exist_variable(char *name);
void show_vars();

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
