#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

class Veiculo{
public:
    int tipo;
    string nome;
};

int main()
{
    int num{10};
    string nome{"Diogo"};
    vector<int> valores{1,2,3,4,5};
    map<string,string> capitais{{"MG", "Belo Horizonte"}};

    Pessoa p1{"Bruno", 38};
    Pessoa p2{"Diogo", 16};

    Veiculo v1{1, "Carango"};

    cout << num << nome << endl;

    return 0;
}