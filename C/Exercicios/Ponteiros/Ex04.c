#include <stdio.h>

/*
Considere a seguinte declaração: int A, *B, **C, ***D
Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
o triplo e D o quádruplo.
*/

int main()
{
  int a = 4, *b, **c, ***d;
  b = &a;
  c = &b;
  d = &c;
  printf("Valor de A: %d\nValor de *B: %d\nValor de **C: %d\nValor de ***D: %d", a, *b * 2, **c * 3, ***d * 4);

  return 0;
}