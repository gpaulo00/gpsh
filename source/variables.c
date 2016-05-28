#include <main.h>

int set_variable(char *name, char *value){
    if(var_size<=var_used){
        char **aux, **aux2;
        aux = realloc(var_names, INCREMENT * sizeof(char *));
        aux2 = realloc(var_values, INCREMENT * sizeof(char *));
        if(aux==NULL||aux2==NULL){printf(RED "Error allocating dynamic memory in set_variable()\n"); closeApp=true; return 2;}
        
        var_size += INCREMENT;
        var_names = aux;
        var_values = aux2;
    }
    var_names[var_used] = name;
    var_values[var_used] = value;
    var_used++;
    return 0;
}

int unset_variable(char *name){
    int n;
    if( (n=exist_variable(name)) == -1 ){
        return 2;
    }
    var_names[n] = "\0";
    var_values[n] = "\0";
    var_used--;
}

int exist_variable(char *name){
    for(int i=0; i<var_used; i++){
        if(strcmp(var_names[i], name) == 0){
            return i;
        }
    }
    return -1;
}

void show_vars(){
    for(int i=0; i<var_used; i++){
        printf("%s: %s;", var_names[i], var_values[i]);
    }
}
