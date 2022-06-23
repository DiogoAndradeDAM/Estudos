#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    float num;
    struct no *last;
}No;

struct no * push(No *p, float n){
    No *novo = (No*) malloc(sizeof(No));

    if(novo){
        novo->num = n;
        novo->last = p;
        return novo;

    }printf("\nERROR\n");
    return NULL;
}

struct no * pop(No **p){
    No *rm = NULL;

    if(*p){
        rm = *p;
        *p = rm->last;
    }else printf("\nERRRRO\n");
    return rm;
}

void show(No *p){
    printf("\nINICIO\n");
    while(p){
        printf("Valor: %f\n", p->num);
        p = p->last;
    }
    printf("\nFIM\n");
}

float resolver_expressao(char x[]){
    
}

int main()
{

    return 0;
}