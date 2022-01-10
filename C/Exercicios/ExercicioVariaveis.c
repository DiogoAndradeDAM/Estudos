#include <stdio.h>

void main(){
  float preco_banana=2.50, preco_uva=6.50, preco_pessego=10.22;
  int quantidade_banana=2, quantidade_uva=6, quantidade_pessego=10;

  printf("Produto |Preco Unitario |Quantidade |Preco Total\n");
  printf("--------|---------------|-----------|-----------\n");
  printf("Banana  |R$ %7.2f     |%10d |R$      5.00 \n", preco_banana, quantidade_banana);
   printf("--------|---------------|-----------|-----------\n");
  printf("Uva     |R$ %7.2f     |%10d |R$     39.00 \n", preco_uva, quantidade_uva);
   printf("--------|---------------|-----------|-----------\n");
  printf("Pessego |R$ %7.2f     |%10d |R$    102.20 \n", preco_pessego, quantidade_pessego);
   printf("--------|---------------|-----------|-----------\n");
  printf("        |               |Sub-Total  |R$    146.20 \n");
   printf("--------|---------------------------|-----------\n");
  printf("        |Imposto (5\%)               |R$      7.31 \n");
   printf("--------|---------------------------|-----------\n");
  printf("        |               |Total      |R$    153.51 \n");

  return 0;
}