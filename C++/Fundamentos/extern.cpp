#include <iostream>

using namespace std;

extern int num;//Leva uma variavel para outros arquivos, seu recebimento de valor é em outros arquivos

void impNum(){
    cout << num << endl;
}