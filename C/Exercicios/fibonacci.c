#include <stdio.h>
#include <stdlib.h>

int main(){
  int num=0, num2=1, intervalo=10;

  printf("Digite qual será o intervalo da sequência: \n");
  scanf("%d", &intervalo);

  printf("%d ", num);
  for(int i = intervalo; i != 0; i--){
    num2 += num;
    num += num2;
    printf("- %d - %d ", num2, num);
  }

  return 0;
}