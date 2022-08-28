#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    /*
    ofstream: Do programa para o sistema (output)
    ifstream: Do sistem para o programa (input)
    fstream: Do programa para o sistema e vice e versa (output e input)
    */

//    ofstream arquivoS;

//    arquivoS.open("cfbcursos.txt", ios::app/*Posiciona o cursor no fina do arquivo*/);
//    arquivoS << "CFB Cursos de c++\n";
//    arquivoS.close();


    ifstream arquivoE;
    ofstream arquivoO;
    string linha;


    arquivoE.open("cfbcursos.txt");
    if(arquivoE.is_open()){
        while(getline(arquivoE, linha)){
            cout << linha << endl;
        }
        arquivoE.close();
    } else {
        cout << "ERROR não foi possivel ler o arquivo ERRO" << endl;
    }
}