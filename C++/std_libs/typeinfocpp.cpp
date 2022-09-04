#include <iostream>
#include <typeinfo>

class Teste{};

class Base: public Teste{};

int main()
{
    auto n {10};
    std::cout << typeid(n).name()<<'\n';
    auto n2 {1.2};
    std::cout << typeid(n2).name()<<'\n';
    auto n3 {"d"};
    std::cout << typeid(n3).name()<<'\n';
    auto n4 {"dioo"};
    std::cout << typeid(n4).name()<<'\n';
    auto n5 = Teste();
    std::cout << typeid(n5).name()<<'\n';

    if(typeid(int).before(typeid(char))){
        std::cout << "int vem antes de char";
    }else{
        std::cout << "char vem antes de int";
    }

    std::cout <<"\n\n";

    if(typeid(Base).before(typeid(Teste))){
        std::cout << "Base vem antes de Teste";
    }else{
        std::cout << "Teste vem antes de Base";
    }
    return 0;
}