#include <stdio.h>
#include <time.h>

char posicao[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

void desenharJogo(){
  printf("\t%c | %c | %c\n", posicao[0][0], posicao[0][1], posicao[0][2]);
  printf("\t----------\n");
  printf("\t%c | %c | %c\n", posicao[1][0], posicao[1][1], posicao[1][2]);
  printf("\t----------\n");
  printf("\t%c | %c | %c\n", posicao[2][0], posicao[2][1], posicao[2][2]);
}

int main(){

  desenharJogo();

  return 0;
}