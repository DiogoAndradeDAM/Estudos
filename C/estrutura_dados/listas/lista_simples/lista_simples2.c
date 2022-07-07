#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int value;
    struct no *next;
}No;

typedef struct lista{
    No *inicio;
    unsigned short int tam;
}Lista;

struct lista new_lista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}

void inserir_inicio(Lista *lista, int num){
    No *novo = (struct no*) malloc(sizeof(No));

    if(novo){
        novo->value = num;
        novo->next = lista->inicio;//novo aponta para o inicio da lista
        lista->inicio = novo;
        lista->tam++;
    }
}

void inserir_final(Lista *lista, int num){
    No *aux, *novo = (struct no*) malloc(sizeof(No));

    if(novo){
        novo->value = num;
        novo->next = NULL;
        if(lista->inicio == NULL){
            lista->inicio = novo;
        }else{
            aux = lista->inicio;
            while(aux->next)
                aux = aux->next;
            aux->next = novo;
        }
        lista->tam++;
    }
}

void inserir_meio(Lista *lista, int num, int ant){
    No *aux, *novo = (struct no*) malloc(sizeof(No));

    if(novo){
        novo->value = num;
        if(lista->inicio == NULL){
            novo->next = NULL;
            lista->inicio = novo;
        }else{
            aux = lista->inicio;
            while(aux->value != ant && aux->next)
                aux = aux->next;
            novo->next = aux->next;
            aux->next = novo;
        }
        lista->tam++;
    }
}

void imprimir(Lista lista){
    No *no = lista.inicio;
    printf("INICIO DA LISTA\n");
    printf("Tamanho: %d\n", lista.tam);
    while(no){
        printf("Value: %d\n", no->value);
        no = no->next;
    }
    printf("\nFIM DA LISTA\n");
}

int main()
{
    Lista list = new_lista(&list);

    inserir_inicio(&list, 30);
    //inserir_final(&list, 30);
    inserir_meio(&list, 20, 30);

    imprimir(list);

    return 0;
}