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

void criar_fila(Fila *f){
    f->first = NULL;
    f->last = NULL;
    f->tam = 0;
}

void inserir_na_fila(Fila *fila, int num){
    No *aux, *novo = (No*) malloc(sizeof(No));
    if(novo){
        novo->value = num;
        novo->next = NULL;
        if(fila->first == NULL){
            fila->first = novo;
            fila->last = novo;
        }else{
            fila->last->next = novo;
            fila->last = novo;
        }
        fila->tam++;
    }else printf("ERROR PUSH()");
}

No * remover_da_fila(Fila *fila){
    No *rm = NULL;
    if(fila->first){
        rm = fila->first;
        fila->first = rm->next;
        fila->tam--; 
    }else printf("ERROR POP()");
    return rm;
}

void imprimir_fila(Fila *fila){
    No *aux = fila->first;
    printf("-----------FILA------------\n");
    while(aux){
        printf("Value %d\n", aux->value);
        aux = aux->next;
    }
    printf("---------FIM FILA----------\n");
}

int main()
{
    Fila fila;
    No *rm;
    criar_fila(&fila);

    inserir_na_fila(&fila, 1);
    inserir_na_fila(&fila, 2);
    inserir_na_fila(&fila, 3);

    rm = remover_da_fila(&fila);
    imprimir_fila(&fila);

    return 0;
}