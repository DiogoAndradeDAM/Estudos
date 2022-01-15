#include <stdio.h>
#include <stdlib.h>

/*
Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas
variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
*/

void vetMinMax(int *varMin, int *varMax, int *vetor, int tam)
{
  *varMax = *vetor;
  *varMin = *vetor;
  for (int i = 0; i < tam; i++)
  {
    if (*(vetor + i) < *varMin)
      *varMin = *(vetor + i);
    else if (*(vetor + i) > *varMax)
      *varMax = *(vetor + i);
  }
}

int main()
{
  int menor, maior, vet[3] = {2, 5, 16, 9};
  vetMinMax(&menor, &maior, vet, 4);

  printf("O menor valor: %d\n O maior valor: %d", menor, maior);
  return 0;
}