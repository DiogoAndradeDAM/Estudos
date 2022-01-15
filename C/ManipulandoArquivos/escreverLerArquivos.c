#include <stdio.h>

  //Como escrever um arquivo txto com a função fputc()
  //padrão do stdio.h

  /*Modos de abertura de arquivos
  w -> Escrita
  r -> Leitura
  a -> Anexar
  r+ -> Leitura e escrita
  w+ -> Leitura e escrita (apaga o conteudo caso o arquivo exista)
  a+ -> Leitura e escrita (adiciona ao final do arquivo)
  */

void escrever(char f[]){
  FILE *file = fopen(f, "w");
  char letra;

  if(file){
    printf("\nArquivo aberto com sucesso\n");
    if(file){
    printf("\nDigite um texto e pressione ENTER ao finalizar!");
    scanf("%c", &letra);
    while(letra != '\n'){
      fputc(letra, file);
      scanf("%c", &letra);
    }
    } else {
    printf("\nERRO arquivo não aberto com sucesso\n");
    }
  }
}

void ler(char f[]){
  FILE *file = fopen(f, "r");
  char letra;

  if(file){
    printf("Sucesso\n");
  } else {
    printf("ERRO ERRO\n");
  }
}

int main(){

  FILE *file;
  char letra;

  file = fopen("Arquivos/teste.txt","w+");

  if(file){
    printf("\nDigite um texto e pressione ENTER ao finalizar!");
    scanf("%c", &letra);
    while(letra != '\n'){
      fputc(letra, file);
      scanf("%c", &letra);
    }

    rewind(file); //Volta pro inicio do arquivo

    printf("\nTexto lido do arquivo:\n");
    while(!feof(file)){ //feof() talvez indique o final do arquivo (ele não explica para que serve)
      letra = fgetc(file);
      printf("%c", letra);
    }

    fclose(file);
  } else {
    printf("\n\t--> ERRO ao abrir arquivo!\n");
  }

  return 0;
}