#include <stdio.h>
#include <stdlib.h>

/*
    1 0 0 0 0 1 1 1
    - 64 32 16 8 4 2  1                
    bit = 1bit;
    byte = 8bit; 
    kilobyte = 1024bytes;
    megabyte = 1024bytes;
*/

int main(int argc, char argv[])
{
    /*
        nome da variavel não pode conter caracteres especiais com exceção de "_"
        Nome de variaveis só podem conter número caso ele não seja a primeira letra
        certo: num1 | errado: 1num | certo: n1um

        Tipos primitivos
        int: numeros inteiros de 32bits
        float: numeros reais de 32bits
        double: numeros reais de 64bits
        char: caracteres ASCII de 8bits

        Prefixo universal:
        unsigned: libera o bit exclusivo para o sinal de negativo

        prefixos de int:
        short int: numeros inteiros de 16bits
        long long int: numeros inteiros de 64bits

        0.1 + 0.2 != 0.3

        0.100000189774819

        Operadores aritméticos:
        +: mais
        -: subtração
        *: Multiplicação
        /: Divisão
        %: módulo ou resto da divisão

        Operadores de comparação
        == : igual
        > : maior
        < : menor
        >= : maior ou igual
        <= : menor ou igual
        != :  diferente

        Operadores de atribuição:
        = : igual o recebe
        ++ : mais um;
        -- : menos um;
        += : mais igual;
        -= : menos igual;

        I/O:
        Input:
        printf();
        printf("O meu nome é %s, idade: %d, altura: %f, sexo: %c", "Ana", 16, 1.64, "F");
        %s : strings
        %d : inteiros
        %u : naturais
        %f : reais
        %c : char
        %lld : long long int
        %x : hexadecimal
        %o : octal
        putchar(); 
        fgets(txt, "vlblbbl", stdin);
        put();

        Output:
        scanf("%d %s", &age, name);
        getchar();
        get();

        Vetores e matrizes:
        char name[] = "Ana";
        int idades[5] = {1, 2, 3, 4, 5};
        int idades2[2];
        idades2[0] = 2;
        idades2[1] = 16;
        int in[20][10];
        in[0][0] = 1;
        in[1][0] =2 ;
        in[0][1] = 3;

        Funções:
        São blocos de código que podem executar ações
        void escreva(){
            printf("Diogo");
        }

        int soma(){
            return 5 +5;
        }

        int soma(int x, int y){
            return x+ y;
        }

        escreva();
        printf("%d", soma())
        int z = soma(4+diogo);


    */
    char name = 'a';

    return 0;
}