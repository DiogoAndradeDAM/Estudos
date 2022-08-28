#include <iostream>
#include <memory>

enum nivelArmas {nivel1=1, nivel2, nivel3, nivel4, nivel5};
enum FisicEffects {none=0, perfurante=1, dilacerante=2, impactante=3};

class Weapon{
    private:
        nivelArmas weaponLevel;
        int damage;
        float weight;
        std::string name;
        unsigned short int dice;
    protected:
        FisicEffects weaponEffect;

    public:

        Weapon();
        Weapon(nivelArmas _weap, int _dam, float _we, std::string _name, unsigned short int _dice, FisicEffects _effect);

        /*Getters e Setters*/
        //Dice
        unsigned short int get_dice(){return this->dice;}
        //WeaponLevel
        int get_weaponLevel(){return (int)this->weaponLevel;}
        //Weight
        float get_weight(){return this->weight;}
        void set_weight(float _newValue){this->weight=_newValue;}
        //Name
        std::string get_name(){return this->name;}
        //Damage
        int get_damage(){return this->damage;}
        void set_damage(int _newValue){this->damage=_newValue;}
        //Fisics Effects
        FisicEffects get_weaponEffect(){return this->weaponEffect;}

        void ShowStatistics();
};

Weapon::Weapon(){
    this->weaponLevel=nivelArmas::nivel1;
    this->damage=0;
    this->weight=0;
    this->name="none";
    this->dice=20;
    this->weaponEffect=FisicEffects::none;
}

Weapon::Weapon(nivelArmas _weap, int _dam, float _we, std::string _name, unsigned short int _dice, FisicEffects _effect){
    this->weaponLevel=_weap;
    this->damage=_dam;
    this->weight=_we;
    this->name=_name;
    this->dice=_dice;
    this->weaponEffect=_effect;
}

void Weapon::ShowStatistics(){
    std::cout << "Nivel: "<<this->get_weaponLevel()<<"\n";
    std::cout << "Damage: "<<this-get_damage()<<"\n";
    std::cout << "Peso: "<<this->get_weight()<<"\n";
    std::cout << "Nome: "<<this->get_name()<<"\n";
    std::cout << "Efeito: "<<this->get_weaponEffect()<<"\n";
    std::cout << "Dado: D"<<this->get_dice()<<"\n";
}

int main(int argc, char** argv)
{
    Weapon sword = Weapon(nivelArmas::nivel1, 10, 2.5, "Espada de Ferro", 12, FisicEffects::perfurante);
    
    sword.ShowStatistics();
    return 0;
}