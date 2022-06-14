#include <stdio.h>

/*
fwrite(): escreve em arquivo binário
Os modos de abertura são os mesmos de arquivos normais, mas tem um 'b'
no final
*/

typedef struct{
    char nome[50];
    int dia, mes, ano;
}Contato;

void escrever(char arq[]){
    Contato c;
    FILE *file = fopen(arq, "ab");

    if(file){
        printf("Digite o nome e a data de nascimento [dd/mm/aaaa]: ");
        scanf("%49[^\n]%d%d%d", &c.nome, &c.dia, &c.mes, &c.ano);
        fwrite(&c, sizeof(Contato), 1, file);
        fclose(file);
    }else{
        printf("\nERRO ao abrir o arquivo\n");
    }
}

void ler(char arq[]){
    Contato c;
    FILE *file = fopen(arq, "rb");

    if(file){
        while(!feof(file)){
            if(fread(&c, sizeof(Contato), 1, file));
                printf("\nNome: %s\nData: %d/%d/%d\n", c.nome, c.dia, c.mes, c.ano);
        }
        fclose(file);
    }else{
        printf("\nERRO\n");
    }
}

int main()
{
    char arquivo[] = {"Arquivos/agenda.dat"};

    escrever(arquivo);
    ler(arquivo);

    return 0;
}