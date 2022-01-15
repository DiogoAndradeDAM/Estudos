#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int **mat, i, j;
  //Matrizes dinâmicas são ponteiros de vetores
  //Criando a matriz
  mat = malloc(5 * sizeof(int*));
  for(int i=0; i < 5; i++)
    mat[i] = malloc(5* sizeof(int));

  //Colocando valor na matriz
  srand(time(NULL));
  for(i=0; i<5; i++){
    for(j=0; j<5; j++)
      *(*(mat+i)+j) = rand() % 100;
  }
  for(i=0; i<5; i++){
    for(j=0; j<5; j++)
      printf("%2d ", *(*(mat+i)+j));
    printf("\n");
  }

  //Liberando matriz com free()
  for(i=0; i<5; i++)
    free(mat[i]);
  free(mat);
  
  return 0;
}