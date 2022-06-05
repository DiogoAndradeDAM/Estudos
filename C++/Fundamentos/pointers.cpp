#include <iostream>

using namespace std;

int main()
{
    int *p;
    int vetor[10];

    p = &vetor[0];
    cout << p << endl;
    *(p+=1);
    cout << p << endl;
    *p=10;
    cout << vetor[1] << endl;
}