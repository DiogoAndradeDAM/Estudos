#include <iostream>

int main(int argc, char** argv){
    if(static_cast<std::string>(argv[1]) == "-apl-dam"){
        std::cout << "aplicado o dano de "<<argv[2];
    }else{
        std::cout << "Falha de processamento";
        std::cout << argv[1];
    }
}