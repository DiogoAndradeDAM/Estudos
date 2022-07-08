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

void inserir_oerdenado(Lista *lista, int num){
    No *aux, *new = (struct no*) malloc(sizeof(No));

    if(new){
        new->value = num;
        if(lista->inicio == NULL){
            new->next = NULL;
            lista->inicio = new;
        }else if(new->value < lista->inicio->value){
            new->next = lista->inicio;
            lista->inicio = new;
        }else{
            aux = lista->inicio;
            while(aux->next && new->value > aux->next->value)
                aux = aux->next;
            new->next = aux->next;
            aux->next = new; 
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

struct no * buscar(Lista lista, int num){
    struct no *aux, *no = NULL;
    aux = lista.inicio;
    while(aux && aux->value != num)
        aux = aux->next;
    if(aux)
        no = aux;
    return no;
}

struct no * remover(Lista *lista, int num){
    struct no *aux, *rm = NULL;

    if(lista->inicio){
        if(lista->inicio->value == num){
            rm = lista->inicio;
            lista->inicio = rm->next;
        }else{
            aux = lista->inicio;
            while(aux->next && aux->next->value != num)
                aux = aux->next;
            if(aux->next){
                rm = aux->next;
                aux->next = rm->next;
            }
        }
        lista->tam--;
    }

    return rm;
}

int main()
{
    Lista list = new_lista(&list);
    No *rm;

    inserir_inicio(&list, 10);
    //inserir_final(&list, 30);
    inserir_meio(&list, 20, 10);
    inserir_oerdenado(&list, 15);
    // rm = remover(&list, 15);
    // free(rm);
    rm = buscar(list, 15);
    printf("\nValor buscado: %d\n", rm->value);

    imprimir(list);

    return 0;
}