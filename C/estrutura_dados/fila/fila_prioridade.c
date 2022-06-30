#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int value;
    struct no *next;
}No;

void inserir_na_fila(No **fila, int n){
    No *aux, *novo = (No*) malloc(sizeof(No));
    if(novo){
        novo->value = n;
        novo->next = NULL;
        if(*fila == NULL){//Analisa se a fila está vazia
            *fila = novo;
        }else{
            aux = *fila;
            while(aux->next)
                aux = aux->next;
            aux->next = novo;
        }
    }else printf("\nERROR\n");
}

void inserir_com_prioridade(No **fila, int _n){
    No *aux, *novo = (No*) malloc(sizeof(No));
    if(novo){
        novo->value = _n;
        novo->next = NULL;
        if(*fila == NULL){
            *fila = novo;
        }else{
            if(_n >= 60){
                //Primeira prioridade
                if((*fila)->value < 60){
                    novo->next = *fila;
                    *fila = novo;
                }else{
                    aux = *fila;
                    while(aux->next && aux->next->value >= 60)
                        aux = aux->next;
                    novo->next = aux->next;
                    aux->next = novo;
                }
            }else{
                aux = *fila;
                while(aux->next)
                    aux = aux->next;
                aux->next = novo;
            }
        }
    }else printf("ERROR PUSH()");
}

struct no * remover_da_fila(No **fila){
    No *rm = NULL;
    if(*fila){
        rm = *fila;
        *fila = rm->next;
    }else printf("ERROR POP()");
    return rm;
}

void imprimir_fila(No *fila){
    printf("FILA\n");
    while(fila){
        printf("value: %d\n", fila->value);
        fila = fila->next;
    }
    printf("FIM FILA\n");
}

int main()
{
    No *rm, *fila=NULL;

    inserir_na_fila(&fila, 1);
    inserir_na_fila(&fila, 2);
    inserir_na_fila(&fila, 3);
    inserir_com_prioridade(&fila, 70);

    rm = remover_da_fila(&fila);
    free(rm);
    rm = remover_da_fila(&fila);
    free(rm);

    inserir_com_prioridade(&fila, 62);
    inserir_com_prioridade(&fila, 63);

    imprimir_fila(fila);

    return 0;
}