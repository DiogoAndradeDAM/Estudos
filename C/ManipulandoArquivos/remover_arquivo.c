#include <stdio.h>

int main()
{
    char nome[] = {"Arquivos/conto.txt"};
    FILE *file = fopen(nome, "r");

    if(file){
        printf("\nArquivo aberto com sucesso\n");
        fclose(file);

        printf("\nRetorno: %d\n", remove(nome));

    }else{ 
        printf("\nERROR\n");
        printf("\nRetorno: %d\n", remove(nome));
    }

    return 0;
}