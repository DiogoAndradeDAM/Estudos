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
    struct no *lista=NULL, *lp=NULL, *li=NULL, *aux;

    inserir_ordenado(&lista, 1);
    inserir_ordenado(&lista, 2);
    inserir_ordenado(&lista, 3);
    inserir_ordenado(&lista, 4);
    inserir_ordenado(&lista, 5);

    aux = lista;
    while(aux){
        if(aux->value % 2 == 0) inserir_ordenado(&lp, aux->value);
        else inserir_ordenado(&li, aux->value);
        aux = aux->next;
    }

    imprimir_lista(lp);
    imprimir_lista(li);

    return 0;
}