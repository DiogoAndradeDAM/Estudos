#include <iostream>
#include <memory>

class Carro{
public:
    int vel = 0;
    int getVel(){
        return vel;
    }
    void setVel(int v){
        this->vel = v;
    }
};

using namespace std;

int main()
{
    //int *pnum = new int();
    unique_ptr<int>pnum(new int(10));//unique_ptr só permite um ponteiro deste tipo
    //shared_ptr<int>pnum2(new int);// multiplos ponteiros

    //Carro *c1 = new Carro();
    //delete c1;

    shared_ptr<Carro>c1(new Carro);
    shared_ptr<Carro>c2=c1;
    c1->setVel(5);
    cout << "Velocida c1 " << c1->getVel() << endl; 
    cout << "Velocida c2 " << c2->getVel() << endl; 
}