#include <stdio.h>

/*
Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o
endereço de cada posição do array.
*/

int main()
{
  int lista[10] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109}, num=2;
  for (int i = 0; i < 10; i++)
  {
    printf("Lista[%d] = %d \t Endereco = %p\n", i, lista[i], &lista[i]);
  }

  return 0;
}