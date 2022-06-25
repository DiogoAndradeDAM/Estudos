#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int value;
    struct no *last;
}No;

void inserir_na_fila(No **fila, int n){
    No *aux, *novo = (No*) malloc(sizeof(No));
    if(novo){
        novo->value = n;
        novo->last = NULL;
        if(*fila == NULL){//Analisa se a fila está vazia
            *fila = novo;
        }else{
            aux = *fila;
            while(aux->last)
                aux = aux->last;
            aux->last = novo;
        }
    }else printf("\nERROR\n");
}

struct no * remover_da_fila(No **fila){
    No *rm = NULL;

    if(*fila){
        rm = *fila;
        *fila = rm->last;
    }else printf("\nQUEUE NULL\n");
    return NULL;
}

void imprimir_fila(No *fila){
    printf("\nINICIO\n");
    while(fila){
        printf("%d ", fila->value);
        fila = fila->last;
    }
    printf("\nFIM\n");
}

int main()
{
    No *rm, *fila = NULL;

    inserir_na_fila(&fila, 1);
    inserir_na_fila(&fila, 2);
    inserir_na_fila(&fila, 3);
    inserir_na_fila(&fila, 4);

    rm = remover_da_fila(&fila);

    imprimir_fila(fila);

    imprimir_fila(fila);

    return 0;
}