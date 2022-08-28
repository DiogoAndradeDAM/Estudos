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
        Weapon(){
            this->weaponLevel=nivelArmas::nivel1;
            this->damage=0;
            this->weight=0;
            this->name="none";
            this->dice=20;
            this->weaponEffect=FisicEffects::none;
        }

        Weapon(nivelArmas _weap, int _dam, float _we, std::string _name, unsigned short int _dice){
            this->weaponLevel=_weap;
            this->damage=_dam;
            this->weight=_we;
            this->name=_name;
            this->dice=_dice;
            this->weaponEffect=FisicEffects::none;
        }

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
};

class Swords:public Weapon{
    public:
        Swords(nivelArmas _weap, int _dam, float _we, std::string _name, unsigned short int _dice, FisicEffects _effect)
        :Weapon(_weap,_we,_name,_name){
            this->weaponEffect=_effect;
        }
};



int main(int argc, char** argv)
{
    Weapon sword = Weapon(nivelArmas::nivel1, 10, 2.5, "Espada de Ferro", 12);
    std::cout << sword.get_dice();

    return 0;
}