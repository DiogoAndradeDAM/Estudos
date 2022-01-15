#include <stdio.h>
#include <time.h>
#include <ctype.h>

char posicao[3][3];

int vitorias = 0, derrotas = 0;
short int quemJoga = 0; //Variavel escolhe quem joga primeiro [0=numero_inicial/1=jogador/2=computador]
char acabar = 'S'; //Variavel que recebe o valor referente se o jogador quer sair do jogo no final da partida

void desenharJogo()
{
  printf("\t %c | %c | %c\n", posicao[0][0], posicao[0][1], posicao[0][2]);
  printf("\t-----------\n");
  printf("\t %c | %c | %c\n", posicao[1][0], posicao[1][1], posicao[1][2]);
  printf("\t-----------\n");
  printf("\t %c | %c | %c\n", posicao[2][0], posicao[2][1], posicao[2][2]);
}

void limpaJogo()
{ //Esta função preenche e limpa o jogo
  for (int y = 0; y < 3; y++)
  {
    for (int x = 0; x < 3; x++)
    {
      posicao[y][x] = ' ';
    }
  }
}

int espacoLivre(short int y, short int x)
{ //Esta função analisa se o espaço escolhido está vazio ou cheio
  if (posicao[y][x] == ' ')
    return 1;
  else
    return 0;
}

void jogador()
{
  short int x, y, livre;
  while (1)
  {
    //Entrada de dados
    while (1)
    {
      printf("\nDigite posicao da linha [ 1 | 2 | 3 ]: ");
      scanf("%hi", &y);
      if (y > 0 && y < 4)
        break;
    }
    while (1)
    {
      printf("\nDigite a posicao da coluna [ 1 | 2 | 3 ]: ");
      scanf("%hi", &x);
      if (x > 0 && x < 4)
        break;
    }
    //Analise da entrada de dados
    livre = espacoLivre(--y, --x);
    if (livre == 1)
    {
      posicao[y][x] = 'X';
      break;
    }
    else
      printf("\nERRO espaco ja preenchido! Z%hiZ Z%hiZ\n", y, x);
  }
}

void bot()
{
  short int ybot, xbot, livre;
  srand(time(NULL));

  while (1)
  {
    //Escolha de posições
    ybot = rand() % 3;
    xbot = rand() % 3;

    livre = espacoLivre(ybot, xbot);
    //Nesta parte dependendo do valor se decide quem joga primeiro, jogador ou computador
    if (quemJoga == 2)
    {
      quemJoga=0;
      break;
    }
    if (livre == 1)
    {
      posicao[ybot][xbot] = 'O';
      break;
    }
  }
}

void analisaVencedor()
{
  if (posicao[0][0] == 'X' && posicao[0][1] == 'X' && posicao[0][2] == 'X') //Jogador venceu Horizontal
    vitoria('j');
  else if (posicao[1][0] == 'X' && posicao[1][1] == 'X' && posicao[1][2] == 'X')
    vitoria('j');
  else if (posicao[2][0] == 'X' && posicao[2][1] == 'X' && posicao[2][2] == 'X')
    vitoria('j');
  else if (posicao[0][0] == 'X' && posicao[1][0] == 'X' && posicao[2][0] == 'X') //Vertical
    vitoria('j');
  else if (posicao[0][1] == 'X' && posicao[1][1] == 'X' && posicao[2][1] == 'X')
    vitoria('j');
  else if (posicao[0][2] == 'X' && posicao[1][2] == 'X' && posicao[2][2] == 'X')
    vitoria('j');
  else if (posicao[0][0] == 'X' && posicao[1][1] == 'X' && posicao[2][2] == 'X') //Diagonal
    vitoria('j');
  else if (posicao[2][0] == 'X' && posicao[1][1] == 'X' && posicao[0][2] == 'X')
    vitoria('j');
  else if (posicao[0][0] == 'O' && posicao[0][1] == 'O' && posicao[0][2] == 'O') //I.A venceu Horizontal
    vitoria('i');
  else if (posicao[1][0] == 'O' && posicao[1][1] == 'O' && posicao[1][2] == 'O')
    vitoria('i');
  else if (posicao[2][0] == 'O' && posicao[2][1] == 'O' && posicao[2][2] == 'O')
    vitoria('i');
  else if (posicao[0][0] == 'O' && posicao[1][0] == 'O' && posicao[2][0] == 'O') //Vertical
    vitoria('i');
  else if (posicao[0][1] == 'O' && posicao[1][1] == 'O' && posicao[2][1] == 'O')
    vitoria('i');
  else if (posicao[0][2] == 'O' && posicao[1][2] == 'O' && posicao[2][2] == 'O')
    vitoria('i');
  else if (posicao[0][0] == 'O' && posicao[1][1] == 'O' && posicao[2][2] == 'O') //Diagonal
    vitoria('i');
  else if (posicao[2][0] == 'O' && posicao[1][1] == 'O' && posicao[0][2] == 'O')
    vitoria('i');
  else if (posicao[0][0] != ' ' && posicao[0][1] != ' ' && posicao[0][2] != ' ' && posicao[1][0] != ' ' && posicao[1][1] != ' ' && posicao[1][2] != ' ' && posicao[2][0] != ' ' && posicao[2][1] != ' ' && posicao[2][2] != ' ') //Se deu velha
    vitoria('j');
}

void vitoria(char vencedor)
{
  if (vencedor == 'j')//Quando o jogador vence
  {
    printf("\nParabens voce venceu o jogo!!\n\n");
    vitorias++;
  }
  else if (vencedor == 'i') //Quando a I.A vence
  {
    printf("\nDerrota o computador venceu!\n\n");
    derrotas++;
  }
  else if (vencedor == 'v') //Empate
  {
    printf("\nDeu velha!\n\n");
  }
  quemJoga++;
  continuar();
}

void continuar()
{
  char escolha;
  while (1)
  {
    printf("Gostaria de continuar [S/N]?: ");
    scanf(" %[^\n]c", &escolha);
    escolha = toupper(escolha);
    if (escolha == 'S' || escolha == 'N')
    {
      acabar = escolha;
      limpaJogo();
      break;
    }
    else
      printf("\nEscolha invalida\n");
  }
}

int main()
{
  limpaJogo();
  while (acabar == 'S')
  {
    desenharJogo();
    jogador();
    analisaVencedor();
    bot();
  }
  printf("\nObrigado por jogar\nVitorias: %d\nDerrotas: %d", vitorias, derrotas);
  getchar();

  return 0;
}