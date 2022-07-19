#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int num = rand(); //rand usa uma semente para gerar os números aleatórios

  printf("%d\n\n", num);

  srand(150); //Muda a semente padrão do computador
  srand(time(NULL)); // como a hora do computador é muito aleatória utilize-a para gerar os números sem que haja repetição

  //Para gerar valores aleatórios dentro de um intervalo
  num = 1 + rand() % 100; //o 1 serve para aumentar a base e o 100 é o limite da geração
  return 0;
}