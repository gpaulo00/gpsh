typedef struct ElementoLista{
    char *data;
    struct ElementoLista *next;
} Elemento;

typedef struct ListaUbicacion{ 
    Elemento *begin;
    int size;
} Pila;

/* inicialización */
void initial(Pila *tas);

/* APILAR*/
int push(Pila *tas, char *data);

/* DESAPILAR*/
int pull(Pila *tas);

/* Visualización del elemento en la cabeza de la pila (LastInFirstOut) */
#define pila_dato(tas)  tas->begin->data

/* muestra la pila */
void show(Pila *tas);
