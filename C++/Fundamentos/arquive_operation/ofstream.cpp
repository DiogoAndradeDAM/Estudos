#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*
    ofstream: Do programa para o sistema (output)
    ifstream: Do sistem para o programa (input)
    fstream: Do programa para o sistema e vice e versa (output e input)
    */

   ofstream arquivo;

   arquivo.open("cfbcursos.txt", ios::app/*Posiciona o cursor no fina do arquivo*/);

   arquivo << "CFB Cursos de c++\n";

   arquivo.close();

}