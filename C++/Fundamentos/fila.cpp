#include <iostream>
#include <stdlib.h>
#include <list>

using namespace std;

int main()
{
    list<int> aula, teste;
    list<int>::iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    for(int i=0; i<10; i++){
        aula.push_front(i);
    }

    it=aula.begin();
    advance(it, 5); //Avança o iterator até algum ponto na lista; Valor da posição fica salvo no iterator
    aula.insert(it, 0);
    aula.erase(--it); //Retira um elemento da lista

    aula.merge(teste);//Junta os elementos das duas listas e deixa a teste vazia

    cout << "Tamanho da lista: " << aula.size() << endl;

    //aula.sort();
    aula.reverse();

    //aula.clear(); //Esvazia a lista

    for(int i=0; i<10; i++){
        cout << aula.front() << endl;
        aula.pop_front();
    }

    cout << "Tamanho da lista: " << aula.size() << endl; 

    return 0;
}