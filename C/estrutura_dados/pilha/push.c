#include <stdio.h>

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

struct No{
    Pessoa p;
    struct no *proximo;
};

Pessoa ler_pessoa(){
    Pessoa *p;

    printf("\nDigite nome e data de nascimento [dd/mm/aaaa]:\n");
    scanf("%49[^\n]%d%d%d", &p->nome, &p->data.dia, &p->data.mes, &p->data.ano);
    return *p;
}

void imprimir_pessoa(Pessoa p){
    printf("\nNome: %s\nData de nascimento: %d/%d/%d", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

struct No* empilhar(struct No *topo){
    struct No *novo = malloc(sizeof(struct No));

    if(novo){
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;

    }else printf("\nERROR ao alocar memória\n");
    return NULL;
}

int main()
{
    struct No *topo = NULL;
    int opcao;

    do{
        printf("\nSair - 0\nEmpilhar - 1\nDesempilhar - 2\nImprimir - 3\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
            case 1: topo = empilhar(topo); break;
            case 2: break;
            case 3: break;
            default: if(opcao != 0) printf("Opcao invalida"); break;
        }

    }while(opcao != 0);

    return 0;
}