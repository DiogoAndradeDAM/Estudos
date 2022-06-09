#include <iostream>

using namespace std;

void somador(){
    static int i{0};//o static salva a posição e valor de memória da variável.
    i++;
    cout << i << endl;
}

void impNum();
int num{5};

int main()
{
    auto num{10}; //auto é não dizer implicitamento o tipo da variavel, mas não a torna dinâmica
    //auto num; Isto está errado, com o auto o valor deve ser recebido na declaração
    register int cont; //Pedindo para que a variavel seja armazenada no registador, não na memória
    //Usado para varaiveis de acesso rápido; Mas nem todas as vezes ele vai para o registrador
    somador();
    somador();
    somador();
    somador();
    somador();

}