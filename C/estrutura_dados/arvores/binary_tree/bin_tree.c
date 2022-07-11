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
            return buscar_versao_1(raiz->left, num);
        else
            return buscar_versao_1(raiz->right, num);
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

int altura(NoArv *raiz){//Altura é a distância dos elementos mais longe da raiz
    if(raiz == NULL){
        return -1;
    }else{
        int esq = altura(raiz->left);
        int dir = altura(raiz->right);
        if(esq > dir) return esq + 1;
        else return dir + 1;
    }
}

int quantidade_nos(NoArv *raiz){
    if(raiz == NULL){
        return 0;
    }else{
        return 1 + (quantidade_nos(raiz->left) + quantidade_nos(raiz->right));
    }
}

int quantidade_folha(NoArv *raiz){
    if(raiz == NULL)
        return 0;
    else if(raiz->left == NULL && raiz->right == NULL)
        return 1;
    else return quantidade_folha(raiz->left) + quantidade_folha(raiz->right);

}

struct no * remover(NoArv *raiz, int num){
    if(raiz == NULL){
        return NULL;
    }else{
        if(raiz->value == num){
            if(raiz->left == NULL && raiz->right == NULL){
                free(raiz);
                printf("\nRemovido valor %d da arvore\n", num);
                return NULL;
            }else{
                if(raiz->left != NULL && raiz->right != NULL){
                    NoArv *aux = raiz->left;
                    while(aux->right != NULL) aux = aux->right;
                    raiz->value = aux->value;
                    aux->value = num;
                    raiz->left = remover(raiz->left, num);
                    return raiz;
                    
                }else{
                    NoArv *aux;
                    if(raiz->left != NULL) aux = raiz->left;
                    else aux = raiz->right;
                    free(raiz);
                    return aux;
                }
            }
        }else{
            if(num < raiz->value) raiz->left = remover(raiz->left, num);
            else raiz->right = remover(raiz->right, num);
            return raiz;
        }
    }
}

int main()
{
    NoArv *raiz = NULL, *rm;

    inserir_versao_3(&raiz, 50);
    inserir_versao_3(&raiz, 25);
    inserir_versao_3(&raiz, 20);
    inserir_versao_3(&raiz, 30);
    inserir_versao_3(&raiz, 100);

    raiz = remover(raiz, 25);
    exibir_versao_2(raiz);


    return 0;
}