using System;

namespace Testes;

public class Person
{
    public string? Name {get; set;}
    public int Age {get; set;}

    public Person(string name, int age)
    {
        this.Name = name;
        this.Age = age;
    }
}
public class Program
{
    static void Main(string[] args)
    {
        Person diogo = new Person("Diogo", 17);
        Person diogo2 = diogo;
        Console.WriteLine($"{diogo.Name}");
        diogo2.Name = "Douglas";
        Console.WriteLine($"{diogo.Name}");
        Console.WriteLine($"{diogo2.Name}");
    }
}

