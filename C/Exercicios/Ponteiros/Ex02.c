#include <stdio.h>
/*
Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve
ser: void troca(float *a, float *b);
*/
void troca(float *a, float *b){
  float aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

int main(){
  float num1=10.2, num2=14.0;
  printf("Valor inicial:\nnum1: %3.1f\nnum2: %3.1f", num1, num2);
  troca(&num1, &num2);
  printf("\n\nValor final:\nnum1: %3.1f\nnum2: %3.1f", num1, num2);

  return 0;
}