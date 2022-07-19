#include <stdio.h>
#include <conio.h> // Para importar as funções clrscr e getch
#include <string.h> // arquivo de cabeçalho para trabalhar com strings

#define NAME "Diogo"

void main(){
  float number = -2.5;
  //printf("number: %7.3f", number);
  char Nome[30];  // declara uma string que poderá armazenar até 29 caracteres !! 

  strcpy(Nome, "Jose da Silva");  // atribui "Jose da Silva" para a variável Nome
  printf("%s", Nome);
  return 0;
}