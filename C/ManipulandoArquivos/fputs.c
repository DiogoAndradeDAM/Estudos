#include <stdio.h>
#include <string.h>

//fputs: recebe uma string completa
//fgets: pega uma string de um arquivo

void escrever(char f[])
{
    FILE *file = fopen(f, "w");
    char texto[500];

    if(file){
        printf("Digite uma frase ou 1 caracter para finalizar:\n");
        scanf("%500[^\n]", texto);//lerá 500 char e parará no \n
        scanf("%c");//para tirar o \n di buffer di teclado e n gerar um loop infinito
        while(strlen(texto) > 1){
            fputs(texto, file);
            fputc('\n', file);
            scanf("%500[^\n]", texto);
            scanf("%c");
        }

        fclose(file);
    } else {
        printf("\nErro ao abrir arquivo\n");
    }
}

void ler(char f[]){
    FILE *file = fopen(f, "r");
    char texto[500];

    if(file){
        printf("\n\tTexto lido do arquivo\n");
        while(!feof(file)){
            if(fgets(texto,500, file))//quandi chega ao final ele retorna 0
                printf(" --> %s", texto);
        }
        fclose(file);
    }else{
        printf("Problema ao abrir o arquivo");
    }
}

int main()
{
    char nome[] = {"Arquivos/conto.txt"};

    escrever(nome);
    ler(nome);

    return 0;
}