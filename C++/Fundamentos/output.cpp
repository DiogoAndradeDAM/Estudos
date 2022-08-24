#include <iostream>
#include <stdio.h>
#include <iomanip>//setbase()
#include <math.h>

using namespace std;

int main()
{
    int num = 10;
    float pi = 3.1415;

    printf("Valor com printf(%5.3f);\n", pi);
    cout.precision(5);
    cout << "Valor com cout << " /*<< std::scientific Notação cientifica*/<< pi << endl;
    cout.precision(-1); //Volta ao normal

    //Bases númericas
    cout << "Hexadecimal: " << hex << num << endl;
    cout << "Octal: " << oct << num << endl;
    cout << "Decimal: " << dec << num << endl;
    cout << "Hexadecimal: " << setbase(16) << num << endl;
    cout << "Decimal: " << setbase(10) << num << endl;

    cout << "Largura:" << setw(10) << num << endl;
    cout << "Largura preenchida:" << setw(10) << setfill('0') <<num << endl;

    return 0;
}