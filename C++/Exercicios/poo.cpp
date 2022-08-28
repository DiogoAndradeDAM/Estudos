#include <iostream>
#include <memory>

enum nivelArmas {nivel1=1, nivel2, nivel3, nivel4, nivel5};

class Weapon{
    private:
        nivelArmas weaponLevel;
        int damage;
        float weight;
        std::string name;
        unsigned short int dice;

    public:
        unsigned short int get_dice(){return this->dice;}


        int get_weaponLevel(){return (int)this->weaponLevel;}


        float get_weight(){return this->weight;}


        std::string get_name(){return this->name;}

        int get_damage(){return this->damage;}


};

Weapon::Weapon(int _damage){
    this->weaponLevel=nivel1;
    this->damage=_damage;
    this->weight=0;
    this->name="none";
    this->dice=20;
};

int main(int argc, char** argv)
{
    Weapon *sword = new Weapon(10);
    std::cout << sword->get_dice();

    return 0;
}