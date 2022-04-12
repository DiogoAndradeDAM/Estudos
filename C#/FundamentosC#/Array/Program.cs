using System;

namespace Array
{
  class Program
  {
    static void Main(string[] args)
    {
      int[] meuArray = new int[5] {1, 2, 3, 4, 5};
      var funcionarios = new Funcionario[5];
      funcionarios[0] = new Funcionario() {Id=255, Name="André"};
      foreach(var funcionario in funcionarios)
        Console.WriteLine(funcionario.Id);
      
    }

    public struct Funcionario
    {
      public int Id {get; set;}

      public string Name {get; set;}
    }
  }
}
