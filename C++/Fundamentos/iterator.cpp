#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> produtos = {"mouse", "teclado", "monitor", "gabinete", "cx.som"};
    vector<string>::iterator it;
    //auto::iterator it;

    //it = produtos.end()-1;
    it = produtos.begin();

    /*
        advance
        next (para direita)
        prev (para esquerda)
    */

   //advance(it, 3);

    cout << *next(it, 1) << endl;
    cout << *prev(it, 1) << endl;

    for(it=produtos.begin(); it!=produtos.end(); it++){
        cout << *it << endl;
    }

    return 0;
}