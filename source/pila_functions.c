#include <main.h>

void initial(Pila * tas){
    tas->begin = NULL;
    tas->size = 0;
}

/* apilar (añadir) un elemento en la pila */
int push(Pila * tas, char *data){
    Elemento *nuevo_elemento;
    if ((nuevo_elemento = (Elemento *) malloc(sizeof (Elemento))) == NULL)    return -1;
    if ((nuevo_elemento->data = (char *) malloc(50 * sizeof (char)))      == NULL)    return -1;
    strcpy (nuevo_elemento->data, data);
    nuevo_elemento->next = tas->begin;
    tas->begin = nuevo_elemento;
    tas->size++;
    return 0;
}

/* desapilar (eliminar un elemento de la pila */
int pull(Pila * tas){
    Elemento *sup_elemento;
    if (tas->size == 0)    return -1;
    sup_elemento = tas->begin;
    tas->begin = tas->begin->next;
    free(sup_elemento->data);
    free(sup_elemento);
    tas->size--;
    return 0;
}

/* visualización de la pila */
void show(Pila * tas){
    Elemento *actual;
    int i;
    actual = tas->begin;
    for(i=0;i<tas->size;++i){
        printf("%s;", actual->data);
        actual = actual->next;
    }
}
