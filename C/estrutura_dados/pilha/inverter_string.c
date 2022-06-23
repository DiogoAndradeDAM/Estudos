#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    char c;
    struct no *last;
}No;

struct no * push(No *p, char x){
    No *novo = (No*) malloc(sizeof(No));

    if(novo){
        novo->c = x;
        novo->last = p;
        return novo;
    }else printf("\nERROR");
    return NULL;
}

struct no * pop(No **p){
    No *rm = NULL;

    if(*p){
        rm = *p;
        *p = rm->last;
        return rm;

    }printf("\nERRRRROR\n");}

void show(No *p){
    printf("\nINICIO\n");
    while(p){
        printf("\nValor: %c\n", p->c);
        p = p->last;
    }
    printf("\nFIM\n");
}

void reverse_string(char x[]){
    No *p=NULL, *rm;
    char strr[strlen(x)];
    unsigned i=0;

    while(x[i] != '\0'){
        p = push(p, x[i]);
        i++;
    }
    i=0;
    while(p){
        strr[i] = p->c;
        rm = pop(&p);
        free(rm);
        i++;
    }

    printf("%s", strr);
}

int main()
{
    reverse_string("Diogo Andrade");

    return 0;
}