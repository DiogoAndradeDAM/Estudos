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

  printf("Resultado: %d\n", strcmp(palavras3, palavras2)); //Compara duas strings com o retorno de : 0 caso as string sejam iguais, 1 se a primeira for maior que a segunda e -1 caso a primeira seja menor que a segunda

  strcpy(palavras2, palavras3); //Copia uma string strcpy(pra_onde_vai, de_onde_vem)

  //Procura um caracter em uma string (ambas retornam um ponteiro)
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

  return 0;
}