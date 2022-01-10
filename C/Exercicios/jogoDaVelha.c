#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  char posicao[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
  short int y, x, ybot, xbot, teste = 0;
  char vencedor, enter;

  srand(time(NULL));

  //Inicio
  printf("Bem vindo ao jogo da velha\n\n");
  printf("Aperte Enter para continuar: ");
  getchar();

  while (1)
  {
    //Desenhando jogo na tela
    printf(" %c | %c | %c\n", posicao[0][0], posicao[0][1], posicao[0][2]);
    printf("------------\n");
    printf(" %c | %c | %c\n", posicao[1][0], posicao[1][1], posicao[1][2]);
    printf("------------\n");
    printf(" %c | %c | %c\n", posicao[2][0], posicao[2][1], posicao[2][2]);

    //Jogador escolhendo o lugar para jogar
    while (1)
    {
      while (1)
      {
        printf("digite a linha que voce quer colocar [|1 | 2 | 3]: \n");
        scanf("%hi", &y);
        if (y > 0 && y < 4)
        {
          break;
        }
      }
      while (1)
      {
        printf("Digite a coluna que voce quer colocar [1 | 2 | 3]: \n");
        scanf("%hi", &x);
        if (x > 0 && x < 4)
        {
          break;
        }
      }
      //Avaliando se pode colocar valor no espaço
      y--;
      x--;
      if (posicao[y][x] == ' ')
      {
        posicao[y][x] = 'X';
        break;
      }
      else
      {
        printf("Espaco ja preenchido!\n");
      }
    }

    //I.A jogando
    while (1)
    {
      ybot = rand() % 3;
      xbot = rand() % 3;
      //Avaliando se pode colocar valor no espaço
      if (posicao[ybot][xbot] == ' ')
      {
        posicao[ybot][xbot] = 'O';
        break;
      }
      else if (posicao[0][0] != ' ' && posicao[0][1] != ' ' && posicao[0][2] != ' ' && posicao[1][0] != ' ' && posicao[1][1] != ' ' && posicao[1][2] != ' ' && posicao[2][0] != ' ' && posicao[2][1] != ' ' && posicao[2][2] != ' ')
      { //Se não há espaços disponiveis
        break;
      }
    }

    //Escolhendo vencedor
    if (posicao[0][0] == 'X' && posicao[0][1] == 'X' && posicao[0][2] == 'X')
    { //Jogador venceu Horizontal
      vencedor = 'j';
      break;
    }
    else if (posicao[1][0] == 'X' && posicao[1][1] == 'X' && posicao[1][2] == 'X')
    {
      vencedor = 'j';
      break;
    }
    else if (posicao[2][0] == 'X' && posicao[2][1] == 'X' && posicao[2][2] == 'X')
    {
      vencedor = 'j';
      break;
    }
    else if (posicao[0][0] == 'X' && posicao[1][0] == 'X' && posicao[2][0] == 'X')
    { //Vertical
      vencedor = 'j';
      break;
    }
    else if (posicao[0][1] == 'X' && posicao[1][1] == 'X' && posicao[2][1] == 'X')
    {
      vencedor = 'j';
      break;
    }
    else if (posicao[0][2] == 'X' && posicao[1][2] == 'X' && posicao[2][2] == 'X')
    {
      vencedor = 'j';
      break;
    }
    else if (posicao[0][0] == 'X' && posicao[1][1] == 'X' && posicao[2][2] == 'X')
    { //Diagonal
      vencedor = 'j';
      break;
    }
    else if (posicao[2][0] == 'X' && posicao[1][1] == 'X' && posicao[0][2] == 'X')
    {
      vencedor = 'j';
      break;
    }
    else if (posicao[0][0] == 'O' && posicao[0][1] == 'O' && posicao[0][2] == 'O')
    { //I.A venceu Horizontal
      vencedor = 'i';
      break;
    }
    else if (posicao[1][0] == 'O' && posicao[1][1] == 'O' && posicao[1][2] == 'O')
    {
      vencedor = 'i';
      break;
    }
    else if (posicao[2][0] == 'O' && posicao[2][1] == 'O' && posicao[2][2] == 'O')
    {
      vencedor = 'i';
      break;
    }
    else if (posicao[0][0] == 'O' && posicao[1][0] == 'O' && posicao[2][0] == 'O')
    { //Vertical
      vencedor = 'i';
      break;
    }
    else if (posicao[0][1] == 'O' && posicao[1][1] == 'O' && posicao[2][1] == 'O')
    {
      vencedor = 'i';
      break;
    }
    else if (posicao[0][2] == 'O' && posicao[1][2] == 'O' && posicao[2][2] == 'O')
    {
      vencedor = 'i';
      break;
    }
    else if (posicao[0][0] == 'O' && posicao[1][1] == 'O' && posicao[2][2] == 'O')
    { //Diagonal
      vencedor = 'i';
      break;
    }
    else if (posicao[2][0] == 'O' && posicao[1][1] == 'O' && posicao[0][2] == 'O')
    {
      vencedor = 'i';
      break;
    }
    else if (posicao[0][0] != ' ' && posicao[0][1] != ' ' && posicao[0][2] != ' ' && posicao[1][0] != ' ' && posicao[1][1] != ' ' && posicao[1][2] != ' ' && posicao[2][0] != ' ' && posicao[2][1] != ' ' && posicao[2][2] != ' ')
    {//Se deu velha
      vencedor = 'v';
      break;
    }
  }

  printf(" %c | %c | %c\n", posicao[0][0], posicao[0][1], posicao[0][2]);
  printf("------------\n");
  printf(" %c | %c | %c\n", posicao[1][0], posicao[1][1], posicao[1][2]);
  printf("------------\n");
  printf(" %c | %c | %c\n", posicao[2][0], posicao[2][1], posicao[2][2]);

  if (vencedor == 'j')
  {
    printf("\nParabens voce venceu!\n");
  }
  else if (vencedor == 'i')
  {
    printf("\nerrota, I.A venceu\n");
  }
  else if (vencedor == 'v')
  {
    printf("\nDeu velha!\n");
  }

  printf("\nPressione Enter para encerrar: ");
  getc(stdin);
  getc(stdin);

  return 0;
}