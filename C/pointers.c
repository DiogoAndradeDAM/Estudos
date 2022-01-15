#include <stdio.h>
#include <stdlib.h>

void imprimir(int *num){
  printf("%d\n", *num);
  *num = 80;
}

int main(){
  int num = 10;
  int *p;
  p = &num;

  printf("Size of pointer: %d bytes", *p);

  //Vetores são ponteiros por padrão e sempre apontam para a posição 0

  //ponteiro como parâmetro
  int idade = 35;
  imprimir(&idade);
  printf("No main: %d\n", idade); 
  return 0;

  //Quando estamos manipulando um ponteiro para um struct não se utiliza o . e sim -> Exp: x->dia ao invés de x.dia

  //Ponteiro para ponteiros
  int A = 100, *B, **C, ***D; //A variavel C é um ponteiro de outro ponteiro, D é um ponteiro de ponteiro de um ponteiro
  printf("Endereço de C: %p\tConteudo de C: %p\n", &C, C);
  printf("Conteudo apontado por C: %d\n", **C);
}