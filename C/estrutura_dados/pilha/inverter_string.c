#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char c;
    struct no *last;
}No;

typedef struct{
    No *top;
}Pilha;

void criar_pilha(Pilha *p){
    p->top = NULL;
}

void push(Pilha *p, char c){
    No *novo = malloc(sizeof(No));

    if(novo){
    novo->c = c;
    novo->last = p->top;
    p->top = novo;

    }else printf("\nERROR");
}

No* pop(Pilha *p){
    No *rm = NULL;

    if(p->top){
        rm = p->top;
        p->top = rm->last;
        return rm; 

    }else printf("\nERRRROR\n");
    return NULL;
}

void show(Pilha *p){
    No *aux = p->top;
    printf("\nPILHA\n");
    while(aux){
        printf("Value: %c\n", aux->c);
        aux = aux->last;
    }
    printf("\nFIM PILHA\n");
}

char* inverter_string(char x[]){
    Pilha p;
    No *rm;
    unsigned int i=0;
    char *mstring;
    while(x[i] != '\0'){
        push(&p, x[i]);
    }  
    while(p.top !=NULL){
        *(mstring+i) = p.top->c;
        i--;
        p.top = p.top.last;
    }

    return mstring;
}

int main()
{
    Pilha p;
    No *rm;

    return 0;
}