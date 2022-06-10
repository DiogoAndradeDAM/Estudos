#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>n{0,1,2,3,4,5,6,7,8,9};

    for(vector<int>::iterator it=n.begin(); it<n.end(); it++){
        cout << *it << endl;
    }

    for_each(n.begin(), n.end(), [](int num){
        num += 10;//Altera o valor somente no escopo atual
        cout << num << endl;
    });
}