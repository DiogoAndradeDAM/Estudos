#include <iostream>
#include <utility>//pair
#include <vector>

using namespace std;

int main()
{
    pair<int,string> par[3];

    par[0].first = 10;
    par[0].second = "Diogo";
    par[1] = make_pair(20, "Curso");

    cout << par[0].first << "-" << par[0].second << endl;

    pair<int,pair<string,double>> par2[3];

    par2[0] = make_pair(10, make_pair("mouse", 10.50));
    par2[1] = make_pair(20, make_pair("teclado", 50.99));
    par2[2] = make_pair(30, make_pair("monitor", 300.00));

    for(int i=0; i<3; i++){
        cout << par2[i].first << " - " << par2[i].second.first << " - " << par2[i].second.second << endl;

    }

    vector<pair<int,string>> prod;

    prod.push_back(make_pair(10,"Diogo"));
    prod.push_back(make_pair(20,"Andrade"));
    prod.push_back(make_pair(30,"Moura"));

    for(auto i:prod){
        cout << i.first << " - " << i.second << endl;
    }
}