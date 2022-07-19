#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> //Para imporat toupper e tolower

int main()
{
  int tam;
  char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};
  char palavras2[20] = {"Abacate"};
  char palavras3[20] = {"Bom dia"};
  char *letra, *letra2, *pt;
  //Matrizes em C cada linha é uma string, então é necessário indicar o indice das linhas

  //\0 na tabela ASCII significa NULL e é o final de uma string

  tam = strlen(palavras); //Lê o tamanho da string com o \n

  //strcat(palavras2, " Bom dia."); //Concatena strings
  //strncat(palavras3, palavras2, 5); //A mesma coisa sos strcat(), mas com uma quantidade de caracteres a serem concatenados

  printf("Resultado: %d\n", strcmp(palavras3, palavras2)); //Compara duas strings com o retorno de : 0 caso as string sejam iguais, 1 se a primeira for maior que a segunda e -1 caso a primeira seja menor que a segunda
  //strncmp(palavras2, palavras3, 5);//A memsa coisa do strcmp(), mas com uma quantidade de caracteres a serem comparados
  strcpy(palavras2, palavras3); //Copia uma string strcpy(pra_onde_vai, de_onde_vem)
  //size_t t = strxfrm(char *dest, char *orig, size_t n); //Copia o valor da *orig para *dest e a quantidade de caracteres passados será ser retorno, com o máximo de caracteres passados sendo limitados por n
  strcat(palavras3, palavras2);//adiciona o conteudo da segunda string na primeira, mas só pode receber vetores
  //Procura um caracter em uma string (ambas retornam um ponteiro)
  printf("%d\n", strcspn(palavras3, "aid")); //Retona um valor natural referente a posição de vetor da primeira ocorrencia de um dos caracteres da segunda string (parecido ao strstr(), mas separa os caracteres)
  //Quando o valor não é encontrado retorna a posição de vetor do caracter nulo
  printf("%c\n", strpbrk(palavras3, "aid")); //Retorna o primeiro caracter da segunda string que ocorre na primeira string, neste caso "d". Retorna NULL caso o nenhum caracter ocorra

  printf("%d\n", strspn(palavras2, "aba")); //Retorna um valor natural referente a quantidade de caracteres que na ordem da segunda string2 ocorreram na primeira string, parando a contagem no primeiro caracter diferente

  letra = strchr(palavras2, 'a');   // Retorna a primeira ocorrência
  strrchr(palavras2, 'a'); //Retorna a última ocorrência
  letra2 = strstr(palavras3, "Bom");//Substring (retorna um ponteiro)
  if(letra2)
    printf("\n%c%c%c\n", *letra2, *(letra2+1), *(letra2+2));
  else
    printf("\nPonteiro nulo\n");

  //Isto só funciona em windows
  //strupr(palavras3); //upper
  //strlwr(palavras3); //lower
  // toupper e tolower funcionam em qualquer sistema operacional, mas estas funções só mudam uma letra por vez

  //Dividindo strings em tokens
  pt = strtok(palavras2, " ");//Vc pode colocar multiplos itens para que ocorra as divisões exp: "!. "
  while(pt){
    printf("token: %s\n", *pt);
    pt = strtok(NULL, " "); //Está parte é necessária para mostrar os outros tokens, o NULL é obrigatório para ver que o fim do token é NULL
  }

  printf("\nPonteiro: %s", palavras3);

  /*
  memcpy(char *dest, char *orig, size_t n); //Retorna uma cópia da string orig na dest, o n diz quantos caracteres devem ser copiados
  memmove(char *dest, char *origm size_t n); //A mesma coisa do memcpy, mas seu uso é recomendado para mudar um centudo já existente da *dest
  memset(char *dest, int c, size_t n); //O c representa um caracter em valor ASCII que irá substituir n caracteres no *dest
  memcmp(cahr *str1, char *str2, size_t n); //Retorna uma comparação de n bytes entre as strings *str1 e *str2. 
  //Retornando: (value < 0 | str1 < str2) (value > 0 | str1 > str2) (value == 0 | str1 == str2)

  */

  return 0;
}