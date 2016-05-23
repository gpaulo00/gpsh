#include <3ds.h>
#include <stdio.h>
#include <sf2d.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define VERSION     "0.2.8"
#define DEBUG_MODE  0

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
#define WHITE   "\x1b[0m"

#include <keyboards.h>

//Funciones Externas
#include <functions.h>

//Variables Globales
int teclado;
int result;
bool closeApp;
char **commands;
int n_cmds;

// Dinamic
int write_kb;
char *command;
char *c_aux;
int c_size;
