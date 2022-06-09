#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //[area de captura de variaveis](paramentros)->retorno{corpo da função} [](){}
    int x1=10, x2=5, x3=2, x4=12;

    //auto soma=[=]//significa para pegar todas as váriaveis do escopo
    auto soma = [x1,x2,x3,x4]()->int{
        return x1+x2+x3+x4;
    };

    auto maior = [=](vector<int>n)->int{
        auto m=0;
        for(auto x:n){
            m = (m>x) ? m : x;
        }
        return m+x1+x2+x3+x4;
    }; 

    cout << maior({10,70,90,40,50}) << endl;
    cout << soma() << endl;
}