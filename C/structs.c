#include <stdio.h>
#include <stdlib.h>

//Struct podem receber tipos de outras structs, mas o tipo deve ter sido declarado antes do uso

//Caso haja tipos diferentes dentro de uma struct, haverá um consumo maior de bits da memória para fazer um gerencimantos dos tipos, sendo 1 bit para cada tipo

//Primeira forma de criar uma struct
typedef struct{
  int idade;
  char sexo;
  char nome[100];
}Pessoa;

//Segunda forma de criar uma struct
struct Pessoa2{
  int idade;
  char sexo;
  char nome[100];
};

int main(){
  Pessoa nome;
  struct Pessoa2 nome2; //Por não ter typedef na struct, toda variavel terá que ter typedef
  nome.idade = 16;
  nome.sexo = 'M';
  strcpy(nome.nome, "Diogo Andrade de Moura"); //É necessario utilizar strcpy em strings



  return 0;
}