#include <stdio.h>
#include <stdlib.h>

int main(){
  //Malloc (Memory alloc)
  //Retorna um ponteiro para a região de memória alocada ou NULL
  int *x;
  x = malloc(sizeof(int));

  //calloc
  //A diferença entre malloc e calloc é que calloc tem um parâmetro para quantas alocações serão feitas
  char *y;
  y = calloc(1, sizeof(char));

  //Vetor dinâmico
  int *vet, tam=5;
  vet = malloc(sizeof(int)*tam);

  if(vet){
    printf("Memoria alocada com sucesso!\n");
    /*
    printf("x: %d\n", *x);
    *x = 50;
    printf("x: %d\n", *x);
    */
    for(int i = 0; i < tam; i++)
      *(vet + i) = i;
    for(int c = 0; c < tam; c++)
      printf("%d ", *(vet+c));    
    printf("\n\n");

    //realloc
    //Retorna um ponteiro para nova região de memória
    //Se o ponteiro for nulo ela aloca memória
    //Se o novo tamanho for zero a memória é liberada
    //Se não houver memória suficiente retorna null
    tam = 15;
    vet = realloc(vet, tam);
    for(int i = 0; i < tam; i++)
      *(vet + i) = i;
    for(int c = 0; c < tam; c++)
      printf("%d ", *(vet+c));

    //free
    //Livera memória alocada dinamicamente
    //Recebe o ponteiro como parâmetro
    free(vet);
  }
  else
    printf("Erro ao alocar memoria!\n");
  return 0;
}