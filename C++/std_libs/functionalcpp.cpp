#include <iostream>
#include <functional>

struct teste{
    int num;
    int dobro(){
        return num*2;
    }
};

int soma(int x, int y){
    return x+y;
}

int main(void)
{
    auto res = std::bind(soma,5,10);

    std::cout << res();

    int n1 =10;
    auto n2 = std::cref(n1);//std::ref(n1)
    //As variaveis dividem o mesmo valor na memoria
    teste m1 {10};

    auto dobro2 = std::mem_fn(&teste::dobro);

    std::cout << "\n"<<dobro2(m1)<<"\n";

    return 0;
}