#include <stdio.h>
#include <stdlib.h>

/*
    Como descobrir se uma expressão matemática está mal formada?

*/

typedef struct no{
    char caracter;
    struct no *proximo;
}No;

No* push(No *pilha, char valor){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->caracter = valor;
        novo->proximo = pilha;
        return novo;

    }else printf("\nERROR\n");
    return NULL;
}

No* pop(No **p){
    No *rm = NULL;

    if(*p){
        rm = *p;
        *p = rm->proximo;
        return rm;
    }else printf("\nEEROR\n");
}

void last(No *p){
    printf("\nPILHA");
    while(p){
        printf("\t%c\n", p->caracter);
        p = p->proximo;
    }
    printf("\nFIM PILHA");
}

int forma_par(char f, char d){
    switch (f){
    case ')' : return (d=='(') ? 1: 0; break;
    case '}' : return (d=='{') ? 1: 0; break;
    case ']' : return (d=='[') ? 1: 0;break;
    }
}

int identifica_formacao(char x[]){
    unsigned int i=0;
    No *p = NULL, *rm;

    while(x[i] != '\0'){
        if(x[i] == '[' || x[i] == '(' || x[i] == '{'){
            p = push(p, x[i]);
            last(p);
        }else if(x[i] == ']' || x[i] == ')' || x[i] == '}'){
            rm = pop(&p);
            if(forma_par(x[i], rm->caracter) == 0){
                printf("\tEPRESSAO MAL FORMADA!\n");
                return 1;
            }
            free(rm);
        }
        i++;

    }

    if(p){
        printf("\tExpressao mal formada\n");
        return 1;
    }else{
        printf("\tExpressao bem formada");
        return 0;
    }
}

int main()
{
    char exp[50];

    printf("$_");
    scanf("%49[^\n]", exp);
    printf("\nExp: %s\nRetorno: %d\n", exp, identifica_formacao(exp));

    return 0;
}