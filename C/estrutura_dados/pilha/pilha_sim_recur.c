#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

No* empilhar(No *pilha, int n){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = n;
        novo->proximo = pilha;
        return novo;
    }else printf("\nERROr\n");

    return NULL;
}

No* desempilhar(No **pilha){
    No *remover = NULL;

    if(*pilha){
        remover = *pilha;
        *pilha = remover->proximo;

    }else printf("\nPilha vazia\n");

    return remover;
}

void imprimir(No *pilha){
    printf("\nPILHA\n");
    while(pilha){
        printf("\t%d\n", pilha->valor);
        pilha = pilha->proximo;
    }
    printf("\nFIM PILHA\n");
}

int fatorial(int n){
    No *pilha = NULL, *remover;

    while(n > 1){
        pilha = empilhar(pilha, n);
        n--;
    }

    imprimir(pilha);
    
    while(pilha){
        remover = desempilhar(&pilha);
        n = n * remover->valor;
        free(remover);
    }

    return n;
}

int main()
{
    int num;

    scanf("%d", &num);

    printf("%d! = %d", num, fatorial(num));

    return 0;
}