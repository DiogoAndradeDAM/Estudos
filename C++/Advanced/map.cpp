#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,string>prod;
    map<int,string>::iterator itmap;

    prod[0] = "Mouse";
    prod[1] = "Teclado";
    prod[2] = "Monitor";
    prod.insert(pair<int,string>(3,"Cx.Som"));//pair para colocar o valor no map


    //prod.erase(2);//deleta a partir da chave
    //prod.erase(prod.begin(), prod.end()); //Apaga tudo
    //prod.clear();

    itmap = prod.find(3);
    if(itmap == prod.end()){
        cout << "Produto nao encontrado" << endl;
    }else{
        cout << "Produto em estoque" << endl;
        cout << itmap->first << " - " << itmap->second;
    }

    for(auto it=prod.begin(); it!=prod.end(); it++){
        cout << it->first << " - " << it->second << endl;
    }

    for(auto it:prod){
        cout << it.second << endl;
    }

    return 0;
}