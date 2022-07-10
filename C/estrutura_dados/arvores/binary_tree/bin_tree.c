#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int value;
    struct no *right, *left;
}NoArv;

struct no * inserir_versao_1(NoArv *raiz, int num){
    if(raiz == NULL){
        NoArv *aux = (struct no*) malloc(sizeof(NoArv));
        aux->value = num;
        aux->left = NULL;
        aux->right = NULL;
        return aux;
    }else{
        if(num < raiz->value) 
            raiz->left = inserir_versao_1(raiz->left, num);
        else
            raiz->right = inserir_versao_1(raiz->right, num);
        return raiz;
    }
}

void inserir_versao_2(NoArv **raiz, int num){
    if(*raiz == NULL){
        *raiz = malloc(sizeof(NoArv));
        (*raiz)->value = num;
        (*raiz)->left = NULL;
        (*raiz)->right = NULL;
    }else{
        if(num < (*raiz)->value)
            inserir_versao_2(&((*raiz)->left), num);
        else
            inserir_versao_2(&((*raiz)->right), num);
    }
}

void inserir_versao_3(NoArv **raiz, int num){
    NoArv *aux = *raiz;
    while(aux){
        if(num < aux->value)
            raiz = &aux->left;
        else
            raiz = &aux->right;
        aux = *raiz;
    }
    aux = malloc(sizeof(NoArv));
    aux->value = num;
    aux->left = NULL;
    aux->right = NULL;
    *raiz = aux;
}

struct no * buscar_versao_1(NoArv *raiz, int num){
    if(raiz){
        if(num == raiz->value)
            return raiz;
        else if(num < raiz->value)
            buscar_versao_1(raiz->left, num);
        else
            buscar_versao_1(raiz->right, num);
    }else return NULL;
}

struct no * buscar_versao_2(NoArv *raiz, int num){
    while(raiz){
        if(num < raiz->value)
            raiz = raiz->left;
        else if(num > raiz->value)
            raiz = raiz->right;
        else return raiz;
    }
    return NULL;
}

void exibir_versao_1(NoArv *raiz){
    if(raiz){
        printf("%d ", raiz->value);
        exibir_versao_1(raiz->left);
        exibir_versao_1(raiz->right);
    }
}

void exibir_versao_2(NoArv *raiz){
    if(raiz){
        exibir_versao_1(raiz->left);
        printf("%d ", raiz->value);
        exibir_versao_1(raiz->right);
    }
}

int main()
{
    NoArv *raiz = NULL, *b;

    inserir_versao_3(&raiz, 50);
    inserir_versao_3(&raiz, 30);
    inserir_versao_3(&raiz, 25);
    inserir_versao_3(&raiz, 100);

    exibir_versao_2(raiz);

    b = buscar_versao_2(raiz, 30);
    printf("\nValor buscado: %d", b->value);

    return 0;
}