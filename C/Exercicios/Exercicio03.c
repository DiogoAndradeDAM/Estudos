#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"Portuguese");

  short int amigos, gorjeta=10;
  int contaTotal=120, contaCada, contaReal;

  printf("Você quer ir a um restaurante com seus amigos. Quantos você leva?: ");
  scanf("%hi", &amigos);

  contaReal = contaTotal + contaTotal*gorjeta/100;
  contaCada = contaReal/amigos;

  printf("Você e seus %hi amigos comem no restaurante\n", amigos);
  printf("A conta deu %d com mais %hi\% de gorjeta deu %d, cada um irá pagar %d", contaTotal, gorjeta, contaReal, contaCada);

  return 0;
}