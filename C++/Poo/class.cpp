#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Human{
public:
    string _name;
    int age;
    float height;

    Human(string name, int age, float height):_name(name), age(age){
        this->_name = name;
        this->age = age;
        this->height = height;
    }

    void apresentation(){
        cout << "My name is " << _name << " I have " << age << " ages and I have " << height << " of height in meters" << endl;
    }

    string get_name(){
        return _name;
    }

    void set_name(string value){
        this->_name = value;
    }
};

/* Existe uma outra foram de criar um construtor de uma classe, com o operator ::
Human::Human(string name, int age, float height){
        this->name = name;
        this->age = age;
        this->height = height;
}
Este é um construtor criado fora da classe
*/

int main()
{
    Human diogo("Diogo", 16, 1.69);
    Human douglas("Douglas", 24, 1.72);

    diogo.apresentation();

    cout << diogo.get_name() << endl;

    diogo.set_name("Douglas");

    cout << diogo.get_name() << endl;

    return 0;
}