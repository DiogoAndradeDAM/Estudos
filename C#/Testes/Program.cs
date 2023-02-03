using System;

namespace Testes;

public enum EWeaponTypes
{
    None,
    Sword,
    Axe,
    Club,
}

public class Weapon
{
    public int Damage {get; set;}
    public string Name {get; set;}

    protected Weapon(int damage, string name)
    {
        this.Damage = damage;
        this.Name = name;
    }

    protected Weapon()
    {
        this.Damage = 0;
        this.Name = "";
    }
}

public class Sword : Weapon
{
    public readonly EWeaponTypes WeaponType = EWeaponTypes.Sword;
    
    public Sword(int damage, string name): base(damage, name)
    {
    }

    public Sword(): base()
    {
    }
}
public class Program
{
    static void Main(string[] args)
    {
        Sword espadaDeFerro = new Sword(10,"Espada de Ferro");
        Console.WriteLine($"Name:\t{espadaDeFerro.Name}");
        Console.WriteLine($"Damage:\t{espadaDeFerro.Damage}");
        Console.WriteLine($"Type:\t{espadaDeFerro.WeaponType}");
    }

    static int Sum(params int[] numbers)
    {
        int res=0;
        foreach(int i in numbers) res += i;
        return res;
    }
}

