#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int value;
    struct No *proximo;
}no;

struct No* push(no *n, int v){
    no *novo = malloc(sizeof(struct No));

    if(novo){
        novo->value = v;
        novo->proximo = n;
        return novo;
    }else{
        printf("\nERROR ao alocar memoria\n");
        return NULL;
    }
}

int main()
{
    no *topo = NULL;
    printf("%d %d", topo->proximo, topo->value);
    topo = push(topo, 1);
    printf("%d %d", topo->proximo, topo->value);

    return 0;
}