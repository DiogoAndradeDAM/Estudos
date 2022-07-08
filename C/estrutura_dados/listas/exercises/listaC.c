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

void inserir_ordenado(No **lista, int num){
    No *aux, *novo = (struct no*) malloc(sizeof(No));

    if(novo){
        novo->value = num;
        if(*lista == NULL){
            novo->next = NULL;
            *lista = novo;
        }else if(novo->value < (*lista)->value){
            novo->next = *lista;
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->next && novo->value > aux->next->value)
                aux = aux->next;
            novo->next = aux->next;
            aux->next = novo;
        }
    }
}

struct no * remover(No **lista, int num){
    No *aux, *rm = NULL;
    if(*lista){
        if((*lista)->value == num){
            rm = *lista;
            *lista = rm->next;
        }else{
            aux = *lista;
            while(aux->next && aux->next->value != num)
                aux = aux->next;
            if(aux->next){
                rm = aux->next;
                aux->next = rm->next;

            }
        }
    }else printf("ERRRO FOR SEARCH VALUE");
    return rm;
}

void imprimir_lista(No *lista){
    printf("INICIO FILA\n");
    while(lista){
        printf("%d - ", lista->value);
        lista = lista->next;
    }
    printf("\nFIM FILA\n");
}

struct no * buscar(No *lista, int num){
    No *aux, *no = NULL;
    aux = lista;
    while(aux && aux->value != num)
        aux = aux->next;
    if(aux)
        no = aux;

    return no;
}

int main()
{
    struct no *la=NULL, *lb=NULL, *lc=NULL, *aux;
    inserir_inicio(&la, 10);
    inserir_final(&la, 20); 
    inserir_inicio(&lb, 50); 
    inserir_final(&lb, 60); 

    lc = la;
    aux = lc;
    while(aux->next) aux = aux->next;
    aux->next = lb;

    imprimir_lista(lc);

    return 0;
}