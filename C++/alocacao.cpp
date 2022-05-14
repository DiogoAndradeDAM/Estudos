#include <iostream>

using namespace std;

//Alocação dinâmica de variável

int main()
{
    int *p1 = new int(5);//Aloca um variavel com o valor 5
    int *p2 = new int[5];//Aloca um vetor com 5 espaços

    cout << *p1 << "\n" << *p2;

    delete p1;//Desaloca um variável dinâmica
    delete[] p2;//Desaloca um vetor dinâmico

    cout << *p1 << "\n" << *p2;

    return 0;
}