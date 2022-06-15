#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int dia, mes, ano;
}Contato;

void imprimir(Contato **c, int quant){
    printf("\n\tLista de Contatos\n");
    printf("\t--------------------------------\n");
    for(int i=0; i<quant; i++){
        printf("\t%d = %2d/%2d/%2d\t%s\n", i+1, c[i]->dia, c[i]->mes, c[i]->ano, c[i]->nome);
    }
    printf("\t--------------------------------\n");
}

int cadastrar_contato(Contato **c, int quant, int tam){
    if(quant < tam){
        Contato *novo = malloc(sizeof(Contato));

        printf("\nDigite o nome do contato: ");
        scanf("%50[^\n]", novo->nome);
        printf("\nDigite a data de aniversário [dd/mm/aaaa]: ");
        scanf("%d%d%d", &novo->dia, &novo->mes, &novo->ano);
        getchar();
        c[quant] = novo;

        return 1;
    }else{
        printf("\n\tImpossivel novo cadastro, vetor cheio\n");
        return 0;
    }
}

void alterar_contato(Contato **c, int quant){
    int indice;
    imprimir(c, quant);
    printf("\n\tDigite o codigo do contato que deseja alterar: \n");
    scanf("%d", &indice);
    getchar();
    indice--;
    if(indice >= 0 && indice < quant){
        Contato *novo = malloc(sizeof(Contato));
        printf("\nDigite o nome do contato: ");
        scanf("%50[^\n]", novo->nome);
        printf("\nDigite a data de aniversário [dd/mm/aaaa]: ");
        scanf("%d%d%d", &novo->dia, &novo->mes, &novo->ano);
        getchar();
        c[indice] = novo;
    }else {
        printf("\n\tIndice invalido\n");
    }
}

void alterar_contatoB(char arq[]){
    FILE *file = fopen(arq, "rb+");
    Contato c;
    int i=1, id;

    if(file){
        printf("\tLista de Contatos: \n");
        printf("\t-------------------------\n");
        while(fread(&c, sizeof(Contato), 1, file)){//A partir daqui o file aponta para o final do arquivo
            printf("\t%d = %2d/%2d/%4d\t%s\n", i, c.dia, c.mes, c.ano, c.nome);
            i++;
        }
        printf("\t-------------------------\n");

        printf("\tDigite o indice do contato que queira alterar :");
        scanf("%d", &id);
        getchar();
        id--;

        if(id >= 0 && id < i -1){
            printf("\tDigite nome e data de nascimento [dd/mm/aaaa]: \n");
            scanf("%49[^\n]%d%d%d", &c.nome, &c.dia, &c.mes, &c.ano);
            fseek(file, id*sizeof(Contato), SEEK_SET);//Funciona como um iterator
            //fseek(arquivo, endereço da posição do meu vetor, de onde começar a apontar);
            fwrite(&c, sizeof(Contato), 1, file);//file agora aponta para o contato desejado

        }else printf("Contato inválido");
        fclose(file);

    }else printf("\nERROR ao abrir o arquivo\n");
}

void salvar(Contato **c, int quant, char arq[]){
    FILE *file = fopen(arq, "w");

    if(file){
        fprintf(file, "%d\n", quant);
        for(int i = 0; i<quant; i++){
            fputs(c[i]->nome, file);
            fputc('\n', file);
            fprintf(file, "%d %d %d\n", c[i]->dia, c[i]->mes, c[i]->ano);
        }

        fclose(file);
    }else{
        printf("\nERRO ao abrir o arquivo\n");
    }
}

void salvarB(char arq[], Contato **c, int quant){
    FILE *file = fopen(arq, "wb");

    if(file){
        for(int i=0; i<quant; i++){
            fwrite(c[i], sizeof(Contato), 1, file);//N se pode escrever um vetor de ponteiros de uma vez, pois ele aponta para endereços
        }
        fclose(file);

    }else printf("\nERRO ao tentar abrir\n");
}

int ler_arquivo(Contato **c, char arq[]){
    FILE *file = fopen(arq, "r");
    int quant=0;
    Contato *novo = malloc(sizeof(Contato));

    if(file){
        fscanf(file, "%d\n", &quant);
        for(int i=0; i<quant; i++){
            //fgets(novo->nome, 50, file);//Este n tira o \n
            fscanf(file, "%50[^\n]", novo->nome);//Serve para tirar o \n percorrendo a string
            fscanf(file, "%d %d %d\n", &novo->dia, &novo->mes, &novo->ano);
            c[i] = novo;
            novo = malloc(sizeof(Contato));//Para zerar a variavel
        }
        fclose(file);
    }else{
        printf("\nERROR não foi possivel ler o arquivo\n");
    }

    return quant;
}

int ler_arquivoB(Contato **c, char arq[]){
    FILE *file = fopen(arq, "rb");
    int quant=0;
    Contato *novo = (Contato*) malloc(sizeof(Contato));

    if(file){
        while(fread(novo, sizeof(Contato), 1, file)){
            c[quant] = novo;
            quant++;
            novo = (Contato*) malloc(sizeof(Contato));
        }

        fclose(file);
    }else printf("\nERRO ao abrir o arquivo\n");

    return quant;
}

int main()
{
    Contato *agenda[50];
    char arquivo[] = {"agenda.txt"};
    char arquivo2[] = {"agenda.dat"};
    int tam = 50, quant = 0, opcao=0;

    do{
        printf("\n\tSair - 0\n\tCadastrar - 1\n\tAlterar - 2\n\tImprimir - 3\n\tSalvar - 4\n\tLer arquivo - 5\n\tSalvarB - 6\n\tLerB - 7\n\tAlterarB = 8\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
            case 1: quant += cadastrar_contato(agenda, quant, tam); break;
            case 2: alterar_contato(agenda, quant); break;
            case 3: imprimir(agenda, quant); break;
            case 4: salvar(agenda, quant, arquivo); break;
            case 5: quant = ler_arquivo(agenda, arquivo); break;
            case 6: salvarB(arquivo2, agenda, quant); break;
            case 7: quant = ler_arquivoB(agenda, arquivo2); break;
            case 8: alterar_contatoB(arquivo2); break;
            default: if(opcao!=0) printf("\n\tOpcao invalida%d\n", quant);
        }

    }while(opcao != 0);

    return 0;
}