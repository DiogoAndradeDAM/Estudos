#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int value;
    struct no *next;
}No;

typedef struct lista{
    No *inicio;
    No *fim;
    int tam;
}Lista;

struct lista new_lista(){
    Lista lista;
    lista.inicio = NULL;
    lista.fim = NULL;
    lista.tam = 0;
    return lista;
}

void inserir_inicio(Lista *lista, int num){
    No *novo = (struct no*) malloc(sizeof(No));

    if(novo){
        novo->value = num;
        novo->next = lista->inicio;//novo aponta para o inicio da lista
        lista->inicio = novo;
        if(lista->fim = NULL)
            lista->fim = novo;
        lista->fim->next = lista->inicio;
        lista->tam++;
    }
}

void inserir_final(Lista *lista, int num){
    No *novo = (struct no*) malloc(sizeof(No));

    if(novo){
        novo->value = num;
        if(lista->inicio == NULL){
            lista->inicio = novo;
            lista->fim = novo;
            lista->fim->next = lista->inicio;
        }else{
            lista->fim->next = novo;
            lista->fim = novo;
            lista->fim->next = lista->inicio;
            //novo->next = lista->inicio;
        }
        lista->tam++;
    }
}

void inserir_meio(Lista *lista, int num, int ant){
    No *aux, *novo = (struct no*) malloc(sizeof(No));

    if(novo){
        novo->value = num;
        if(lista->inicio == NULL){
            lista->inicio = novo;
            lista->fim = novo;
            novo->next = lista->inicio;
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

void inserir_ordenado(Lista *lista, int num){
    No *aux, *new = (struct no*) malloc(sizeof(No));

    if(new){
        new->value = num;
        if(lista->inicio == NULL){
            inserir_inicio(lista, num);
        }else if(new->value < lista->inicio->value){
            inserir_inicio(lista, num);
        }else{
            aux = lista->inicio;
            while(aux->next != lista->inicio && new->value > aux->next->value)
                aux = aux->next;
            if(aux->next == lista->inicio)
                inserir_final(lista, num);
            else{
                new->next = aux->next;
                aux->next = new; 
                lista->tam++;
            }
        }
    }
}

void imprimir(Lista lista){
    No *no = lista.inicio;
    printf("INICIO DA LISTA\n");
    printf("Tamanho: %d\n", lista.tam);
    if(no){
        do{
            printf("Valor: %d\n", no->value);
            no = no->next;
        }while(no != lista.inicio);
    }
    printf("\nFIM DA LISTA\n");
}

struct no * buscar(Lista lista, int num){
    struct no *aux = lista.inicio;
    if(aux){
        do{
            if(aux->value == num) return aux;
            aux = aux->next;
        }while(aux != lista.inicio);
    }
    return NULL;
}

struct no * remover(Lista *lista, int num){
    struct no *aux, *rm = NULL;

    if(lista->inicio){
        if(lista->inicio == lista->fim && lista->inicio->value == num){
            rm = lista->inicio;
            lista->inicio = NULL;
            lista->fim = NULL;

        }else if(lista->inicio->value == num){
            rm = lista->inicio;
            lista->inicio = rm->next;
            lista->fim->next = lista->inicio;
        }else{
            aux = lista->inicio;
            while(aux->next != lista->inicio && aux->next->value != num)
                aux = aux->next;
            if(aux->next->value == num){
                if(lista->fim == aux->next){
                    rm = aux->next;
                    aux->next = rm->next;
                    lista->fim = aux;
                }else{
                    rm = aux->next;
                    aux->next = rm->next;
                }
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
    inserir_ordenado(&list, 15);
    // rm = remover(&list, 15);
    // free(rm);
    rm = buscar(list, 15);
    printf("\nValor buscado: %d\n", rm->value);

    imprimir(list);

    return 0;
}