#include <stdio.h>
#include <stdlib.h>

#define TAM 31

typedef struct no{
    int chave;
    struct no *next;
}No;

typedef struct lista{
    struct no *start;
    unsigned int tam;
}Lista;

void new_lista(Lista *l){
    l->start = NULL;
    l->tam = 0;
}

void push(Lista *l, int valor){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->chave = valor;
        novo->next = l->start;
        l->start = novo;
        l->tam++;
    }
}

void imprimir_lista(Lista l){
    No *aux = l.start;
    printf("\nInicio da Lista\n");
    printf("Tamanho da tabela %d\n", l.tam);
    while(aux){
        printf("Valor: %d\n", aux->chave);
        aux = aux->next;
    }
    printf("\nFim da Lista\n");
}

int buscar_lista(Lista *l, int valor){
    No *aux = l->start;
    while(aux && aux->chave != valor)
        aux = aux->next;
    if(aux) return aux->chave;
    return -1;
}

void inicializar_tab(Lista t[]){
    unsigned int i;

    for(i=0; i<TAM; i++)
        new_lista(&t[i]);
}

int funcao_espalhamento(int chave){
    return chave & TAM;
}

void inserir(Lista t[], int valor){
    int id = funcao_espalhamento(valor);
    push(&t[id], valor);
}

int busca(Lista t[], int chave){
    int id = funcao_espalhamento(chave);
    return buscar_lista(&t[id], chave);
}

int imprimir(Lista t[]){
    int i;
    for(i=0; i<TAM; i++){
        printf("%2d = ", i);
        imprimir_lista(t[i]);
    }
}

int main()
{
    Lista tabela[TAM];
    inicializar_tab(tabela);
    inserir(tabela, 20);
    inserir(tabela, 3);
    inserir(tabela, 17);
    inserir(tabela, 57);
    inserir(tabela, 97);

    printf("\nvalor: %d\n", busca(tabela, 97));

    imprimir(tabela);

    return 0;
}