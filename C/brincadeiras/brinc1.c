#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
  char name[20];
  int age;
  float height;
  char gender;
}person;


int main()
{
  int i=0;

  person diogo;
  strcpy(diogo.name, "Diogo");
  diogo.age = 16; diogo.height = 1.71; diogo.gender = 'M';

  int *vetor;

  vetor = malloc(sizeof(int)*5);

  for(i;i<5; i++)
    vetor = i*10;

  for(i;i<5; i++)
    printf("%d", *(vetor+i));

  return 0;
}
