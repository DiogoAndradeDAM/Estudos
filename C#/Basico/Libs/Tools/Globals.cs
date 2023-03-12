using System;

namespace Basico.Tools
{
    public static class Globals
    {
        public static string name = "Diogo";

        public static string getName(){ return name; }
    }
    public class Person
    {
        public string Name {get; set;}
        public int Age {get; set;}

        public Person()
        { 
            this.Name = ""; 
            this.Age = 0;
        }
        public Person(string name, int age)
        {
            this.Name = name;
            this.Age = age;
        }
    }
}