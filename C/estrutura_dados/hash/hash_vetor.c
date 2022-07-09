#include <stdio.h>
#include <stdlib.h>

#define TAM 31

void inicializar_tab(int t[]){
    unsigned int i;

    for(i=0; i<TAM; i++)
        t[i] = 0;
}

int funcao_espalhamento(int chave){
    return chave & TAM;
}

void inserir(int t[], int valor){
    int id = funcao_espalhamento(valor);
    while(t[id] != 0){
        id = funcao_espalhamento(id+1);
    }
    t[id] = valor;
}

int busca(int t[], int chave){
    int id = funcao_espalhamento(chave);
    while(t[id] != 0){
        if(t[id] == chave) return t[id];
        else id = funcao_espalhamento(id+1);
    }
}

int imprimir(int t[]){
    int i;
    for(i=0; i<TAM; i++){
        printf("%d = %d\n", i, t[i]);
    }
}

int main()
{
    int tabela[TAM];
    inicializar_tab(tabela);
    inserir(tabela, 20);
    inserir(tabela, 3);
    inserir(tabela, 17);
    inserir(tabela, 57);
    inserir(tabela, 97);

    printf("\nvalor: %d\n", busca(tabela, 97));

    imprimir(tabela);

    return 0;
}