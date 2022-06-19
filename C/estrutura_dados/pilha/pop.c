#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

Pessoa ler_pessoa(){
    Pessoa p;

    printf("\nDigite o nome e data de nascimento [dd/mm/aaaa]: \n");
    scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}

void imprimir_pessoa(Pessoa p){
    printf("\nNome: %s\tData: %d/%d/%d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

No* empilhar(No *topo){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;

    }else printf("\nERROR\n");

    return NULL;
}

No* desempilhar(No **topo){
    if(*topo != NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }else printf("\nERROR desempilhar\n");

    return NULL;
}

void imprimir_pilha(No *topo){
    printf("\n--------PILHA---------\n");
    while(topo){
        imprimir_pessoa(topo->p);
        topo = topo->proximo;
    }
    printf("\n------FIM PILHA-------\n");
}

int main()
{
    No *topo=NULL, *remover;
    int opcao;

    do{
        printf("\nSair - 0\nEmpilhar - 1\nDesempilhar - 2\nImprimir - 3\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
            case 1: topo = empilhar(topo); break;
            case 2: 
                remover = desempilhar(&topo); 
                if(remover){
                    printf("\nElemento removido\n");
                    imprimir_pessoa(remover->p);
                    free(remover);
                }else printf("\nERROR ao remover elemento\n");
                break;
            case 3: imprimir_pilha(topo); break;
            default: if(opcao != 0) printf("Opcao invalida"); break;
        }

    }while(opcao != 0);

    return 0;
}