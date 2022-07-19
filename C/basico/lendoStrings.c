#include <stdio.h>
#include <stdlib.h>

int main(){
  char palavras[20] = {"Oi. Vamos aprender a programar com a linguagem C?"};

  printf("Digite seu nome: ");
  scanf("%20[^\n]s", palavras); //palavras já tem um endereço, então não é ncessário usar &. O scanf por padrão só pega letras até o primeiro espaço. [^\n] pegará tudo até que o Enter seja pressionado

  //gets(palavras);//Função gets() é perigosa pq ela reescreve o limite da string e pode ocupar espaços na memória que não deveria

  fgets(palavras, 20, stdin); //file //fgets(char_adress, max_width, form);
  //Está função não mostra totalmente a string, ela substitui a ultima letra por \n (isto também acontece com outras funções)

  return 0;
}