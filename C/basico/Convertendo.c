#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //Convertendo números para strings
  int tam;
  char str1[10] = {"%"}, str2[10];
  scanf("%d", &tam);
  scanf("%c");

  //Conversão do tipo int para string
  //sprintf(str2, "%d[^\n]", tam); //Forma básica com [variavel char] que recebe o tipo numero [tipo numerico] [variavel numerica]
  snprintf(str2, 10, "%d", tam); //Forma mais complexa que possui um limitador de caracteres máximo, neste caso 10

  strcat(str1, str2); //Concatena as strings

  printf("Resultado1: %s", str1);

  return 0;
}