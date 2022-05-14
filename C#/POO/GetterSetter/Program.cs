using System;

namespace GetterSetter
{
    class Program
    {
        static void Main()
        {
            Carteira minhaCarteira = new Carteira();
            minhaCarteira.Money = 100;
            minhaCarteira.InfoMoney();
        }
    }

    class Carteira
    {
        public int Money { get; set; }

        public void InfoMoney()
        {
            Console.WriteLine($"Seu saldo é de {Money}");
        }
    }
}


