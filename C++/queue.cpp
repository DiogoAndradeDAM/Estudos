#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da fila: " << cartas.size() << endl;
    cout << "Primeira Carta.:" << cartas.front() << endl;
    cout << "Última Carta...:" << cartas.back() << endl;

    while(cartas.empty()){
        cout << "Primeira Carta: " << cartas.front() << endl;
        cartas.pop();
    }

    return 0;
}