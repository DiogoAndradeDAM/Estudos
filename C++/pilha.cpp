#include <iostream>
#include <stack> //Importa o tipo stack

using namespace std;

int main()
{
    stack<string> cartas;

    if(cartas.empty())
        cout << "A pilha está vazia" << endl;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha: " << cartas.size() << endl;

    cout << "Carta do topo: " << cartas.top() << endl;
    cartas.pop();

    cout << "Nova carta do topo: " << cartas.top() << endl;

    return 0;
}