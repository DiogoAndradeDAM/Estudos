using System;

public enum EFisicEffects 
{
    None=0,
    Slash=1,
    Penetration=2,
    Dilacerant=3,
};

public class Weapons
{
    public Weapons(uint damage, uint dice, string name, double weight, EFisicEffects effect){
        this.Damage = damage;
        this.Dice = dice;
        this.Name = name;
        this.Weight = weight;
        this.FisicEffect = effect;
    }

    private uint Damage {get; set;}
    protected uint Dice {get; set;}
    protected string Name {get;}
    protected double Weight {get; set;}
    private EFisicEffects FisicEffect {get;}
}

public class Personage
{
    public Personage(uint f, uint c, uint d, uint i, uint fe, uint l, string name, int life)
    {
        this.Force = f;
        this.C = c;
        this.D = d;
        this.Inteligency = i;
        this.Fe = fe;
        this.Lucky = l;
        this.Name = name;
        this.Life = life;
        this.Damage = 0;
    }

    public Personage(uint f, uint c, uint d, uint i, uint fe, uint l, string name, int life, Weapons weapon)
    {
        this.Force = f;
        this.C = c;
        this.D = d;
        this.Inteligency = i;
        this.Fe = fe;
        this.Lucky = l;
        this.Name = name;
        this.Life = life;
        this.Weapon = weapon;
        this.setDamage();
    }


    private uint Force {get; set;}
    private uint C {get; set;}
    private uint D {get; set;}
    private uint Inteligency {get; set;}
    private uint Fe {get; set;}
    private uint Lucky {get; set;}
    private int Damage {get; set;}
    private string Name {get; set;}
    private Weapons Weapon {get; set;}
    private int Life {get; set;}

    public void setDamage(){
        if(this.Weapon){
            this.Damage = this.Weapon.Damage;
        }else{
            this.Damage = 4;
        }
    }
}

namespace RpgDamage
{
    class Program
    {
        public static int Main()
        {
            Weapons sword = new Weapons(12, 10, "Espada", 2.4, EFisicEffects.Penetration);


            return 0;
        }
    }
}
