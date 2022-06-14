#include <stdio.h>

//fprintf()
//fcanf()

void escrever(char f[]){
    FILE *file = fopen(f,"w");
    char nome[100];
    int opcao, idade;
    float altura;

    if(file){
        do{
            printf("Digite nome, idade e altura: ");
            scanf("%100[^\n]%d%f", nome, &idade, &altura);

            fprintf(file, "%s %d %.2f\n", nome, idade, altura);

            printf("\nDigite 1 para inserir outro registro. ");
            scanf("%d", &opcao);
            scanf("%c");
        } while(opcao == 1);
        fclose(file);
    } else {
        printf("Erro ao tentar abrir arquivo");
    }
}

void ler(char f[]){
    FILE *file = fopen(f, "r");
    char nome[100];
    int idade;
    float altura;

    if(file){
        printf("\tDados lidos do arquivo\n");
        fscanf(file, "%s%d%f", nome, &idade, &altura);//O retorno é a quantiade de leituras, neste caso 3, se n tiver nada o retorno é -1
        printf("\nNome: %s\nIdade: %d\nAltura: %.2f\n\n", nome, idade, altura);

        fclose(file);
    }else{
        printf("Erro ao tentar abrir arquivo");
    }
}

int main()
{
    char nome[] = {"Arquivos/nomes.txt"};

    escrever(nome);

    ler(nome);

    return 0;
}