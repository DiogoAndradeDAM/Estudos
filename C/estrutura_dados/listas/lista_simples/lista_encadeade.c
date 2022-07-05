#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int value;
    struct no *next;
}No;

void inserir_inicio(No **lista, int num){
    No *novo = (struct no*) malloc(sizeof(No));

    if(novo){
        novo->value = num;
        novo->next = *lista;//novo aponta para o inicio da lista
        *lista = novo;
    }
}

void inserir_final(No **lista, int num){
    No *aux, *novo = (struct no*) malloc(sizeof(No));

    if(novo){
        novo->value = num;
        novo->next = NULL;
        if(*lista == NULL){
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->next)
                aux = aux->next;
            aux->next = novo;
        }
    }
}

void inserir_meio(No **lista, int num, int ant){
    No *aux, *novo = (struct no*) malloc(sizeof(No));

    if(novo){
        novo->value = num;
        if(*lista == NULL){
            novo->next = NULL;
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->value != ant && aux->next)
                aux = aux->next;
            novo->next = aux->next;
            aux->next = novo;
        }
    }
}

void imprimir_lista(No *lista){
    printf("INICIO FILA\n");
    while(lista){
        printf("%d - ", lista->value);
        lista = lista->next;
    }
    printf("\nFIM FILA\n");
}

int main()
{
    struct no *lista=NULL;
    
    inserir_inicio(&lista, 10);
    inserir_final(&lista, 30);
    inserir_meio(&lista, 20, 10);

    imprimir_lista(lista);

    return 0;
}