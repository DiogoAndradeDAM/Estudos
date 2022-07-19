#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL,"Portuguese");// O LC_ALL serve para alterar a biblioteca ASCII padrão. O segundo parâmetro pode ser NULL que é o padrão, "" que serve para usar a configuração do sistema operacional, Portuguese para forçar a tabela usada para o português

  printf("Coração\n");

  return 0;
}