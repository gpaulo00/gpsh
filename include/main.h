#include <3ds.h>
#include <stdio.h>
#include <sf2d.h>
#include <string.h>

#define VERSION "0.2"

#define BLACK   "\x1b[0;30m"
#define GRAY_   "\x1b[1;30m"
#define BLUE    "\x1b[0;34m"
#define GREEN   "\x1b[0;32m"
#define CYAN    "\x1b[0;36m"
#define RED     "\x1b[0;31m"
#define PURPLE  "\x1b[0;35m"
#define COFFEE  "\x1b[0;33m"
#define YELLOW  "\x1b[1;33m"
#define GRAY    "\x1b[0;37m"
#define WHITE   "\x1b[1;37m"

//general_functions.c
bool touchInBox(touchPosition touch, int x, int y, int w, int h);
void prompt();
bool prefix(const char *pre, const char *str);

//keyboard.c
void keyboard(touchPosition touch);

//keyboard_functions.c
void abc();
void shift();
void backspace();
void printf_kb(char let[5]);
void enter();

//comands.c
int hello();

//Variables Globales
int write_kb;
int teclado;
char command[47];
int result;

extern const struct {
 unsigned int width;
 unsigned int height;
 unsigned int bytes_per_pixel;
 unsigned char pixel_data[];
} darkrai;

extern const struct {
 unsigned int width;
 unsigned int height;
 unsigned int bytes_per_pixel;
 unsigned char pixel_data[];
} mayus;

extern const struct {
 unsigned int width;
 unsigned int height;
 unsigned int bytes_per_pixel;
 unsigned char pixel_data[];
} minus;

extern const struct {
 unsigned int width;
 unsigned int height;
 unsigned int bytes_per_pixel;
 unsigned char pixel_data[];
} simbolos1;

extern const struct {
 unsigned int width;
 unsigned int height;
 unsigned int bytes_per_pixel;
 unsigned char pixel_data[];
} simbolos2;

