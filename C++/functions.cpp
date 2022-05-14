#include <iostream>

using namespace std;

void trocaValores(int &, int &);

int main()
{
    int x=5, y=10;

    cout << "Valores básicos:" << "\n" << x << "\n" << y << endl;

    trocaValores(x, y);

    cout << "Valores trocados:" << "\n" << x << "\n" << y << endl;

    return 0;
}

void trocaValores(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}