#include <iostream>
#include <cstdlib>
#include <vector>

class People{
    People(){this->size = 0;}

    private:
        unsigned int size;
        std::vector<std::string> list_person;

    public:
        unsigned int get_size(){return this->size;}

        void push_person(std::string _p){
            this->list_person.push_back(_p);
            this->size++;
        }
        void pop_person(){
            this->list_person.pop_back();
            this->size--;
        }

        std::string get_person(){return this->list_person.back();}
};

int main()
{
    People *list;

    list->push_person("Diogo");
    list->push_person("Andrade");

    std::cout << list->get_size()<<"\n";
    std::cout << list->get_person()<<"\n";
    list->pop_person();
    std::cout << list->get_person()<<"\n";

    return 0;
}