#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int value;
    struct no *next;
}No;

typedef struct fila{
    No *first;
    No *last;
    unsigned int tam;
}Fila;

void init_stack(Fila *f){
    f->first = NULL;
    f->last = NULL;
    f->tam = 0;
}

int main()
{


    return 0;
}