using System;
using System.Globalization;

namespace Moedas
{
  class Program
  {
    static void Main(string[] args)
    {
      Console.Clear();
      decimal valor = 10.25m;
      Console.WriteLine(valor.ToString("C",//para formatar em moeda, ainda existem o P, N, E04, etc.
        CultureInfo.CreateSpecificCulture("pt-BR")));//utilize a cultura para formatar a saida de números
      Console.WriteLine(Math.Round(valor)+"\n"+Math.Ceiling(valor)+"\n"+Math.Floor(valor));
    }
  }
}
