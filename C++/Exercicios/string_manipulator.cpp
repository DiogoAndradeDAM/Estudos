#include <iostream>
#include <string>
#include <iomanip>
#include <locale.h>
#include <cstdlib>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    std::string str;

    std::cout<<"Escreva uma palavra para sofrer transformações \n";
    getline(std::cin, str);

    system("clear||cls");

    std::cout << str.length()<<"\n";
    unsigned int aux = str.length();
    std::cout << str.append(" Andrade")<<"\n";
    std::cout << str.at(0)<<"\n";
    std::cout << str.substr(0, sizeof(str))<<"\n";
    std::cout << str.erase(aux, sizeof(str))<<"\n";
    std::cout << str.insert(0, "#")<<"\n";
    std::cout << setbase(16)<<str<<"\n";
}