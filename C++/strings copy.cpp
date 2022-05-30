#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    string name = "Diogo";
    cout << name.length() << endl;
    
    cout << name.at(0) << endl; //retorna um inteiro

    cout << name.empty() << endl; //Avalia se a string está vazia

    name.clear(); //Limpa a string

    name = "Bro";

    name.append("Code");
    cout << name << endl;

    name.insert(0, "#");
    cout << name << endl;

    cout << name.substr(1, 3) << endl;

    cout << name.find("Code") << endl;

    name.erase(0, 1);
    cout << name << endl;

    printf("My name is: %s.", name.c_str());


    return 0;
}