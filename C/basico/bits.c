#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b=30;

    printf("%d %d", a<<1, a<<2);

    //Operador not ~
    //Inverte todos os bits
    // 1 = 0001 (1)
    // ~1 = 1110 (-2) (complemento de dois)

    printf("\n\n%d %d", a, ~a);

    //Operador and &
    //Se os bits são os mesmos, estes viram 1
    //11110 30
    //10011 10
    //10010 18

    /*
        Pode ser utilizado para analisar se um bit está ligado
        a = 73; 01001001
        b = a & (1 << 3) 00001000 para testar o bit -3
    */

    printf("\n\n%d %d", b, b&19);

    //Operador or |
    //Se um dos bits está ligado, estes viram 1
    //11110 30
    //10011 19
    //11111 = 1

    /*
        Pode ser utilizado para ligar um bit especifico
        a = 1; 0001;
        b = a | (1<<1); 0011 = 3
    */

    printf("\n\n%d %d", b, b|19);

    //Operador OU Exclusivo ^
    //Sempre que os bits tiverem o mesmo valor o bit fina pe 0
    //11110 30
    //10011 19
    //01101 13

    /*
        Uitilizado para inverter um bit
        a = 73; 01001001
        b = a ^ (1<<3); 01000001 65
    */

    return 0;
}