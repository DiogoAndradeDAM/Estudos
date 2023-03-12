using System;

using Basico.Tools;

namespace Basico
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine(Globals.getName());
            Globals.name = "Andrade";
            Console.WriteLine(Globals.getName());

            Person diogo = new Person("Diogo", 17);
            Console.WriteLine($" {diogo.Name} - {diogo.Age}");
        }
    }
}
