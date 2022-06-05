#include <iostream>
#include <string>

using namespace std;

struct Carro{
    string marca;
    int velocidade;

    void inserir(string new_marca, int vel){
        marca = new_marca;
        velocidade = vel;
    }

    void mostrar(){
        cout << "Marca: " << marca << " |" << " Velocidade: " << velocidade << endl;
    }
};

int main()
{
    Carro carro1;
    carro1.inserir("Mustang", 200);
    cout << carro1.marca << " " << carro1.velocidade << endl;

    Carro *carros = new Carro[5];
    carros[0].inserir("Opala", 999);
    carros[1].inserir("Gol", 120);
    carros[0].mostrar();
    carros[1].mostrar();

    return 0;
}