#include <iostream>
#include <stdlib.h>//System

using namespace std;

int main(){
    system("dir");//Executa comando no terminal
    system("clear");
    system("color 02");
    cout << "Hello";
    system("color 03");
    cout << "World" << endl;
    system("color 2A");
    cout << "END";

    // system("clear");

}