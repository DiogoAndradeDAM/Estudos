#include <stdio.h>

int main(){
  short int x = 32767; //%hi
  long long int y; //%lld

  printf("tamanho de int: %d bytes\n", sizeof(int));
  printf("tamanho de short int: %d bytes\n", sizeof x);
  printf("tamanho de long int: %d bytes\n\n\n", sizeof y);

  float a = 3.14; //f
  double b = 3.141; //%lf
  long double c = 3.1415; //%Lf

  printf("tamanho de float: %d bytes\n", sizeof a);
  printf("tamanho de double: %d bytes\n", sizeof b);
  printf("tamanho de long float: %d bytes\n\n", sizeof c);
  
  printf("long double para Linux e MacOs: %Lf\n", c);
  __mingw_printf("long double para Windows: %Lf\n", c);

  return 0;
}