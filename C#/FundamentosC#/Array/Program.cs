using System;

namespace Array
{
  class Program
  {
    static void Main(string[] args)
    {
      int[] meuArray = new int[5] {1, 2, 3, 4, 5};
      int[,] meuArrayBidi = new int[2,5] {{1,2,3,4,5}, {6,7,8,9,10}};
      var funcionarios = new Funcionario[5];
      /*
      funcionarios[0] = new Funcionario() {Id=255, Name="André"};
      foreach(var funcionario in funcionarios)
        Console.WriteLine(funcionario.Id);
      */
      Console.WriteLine(meuArrayBidi[1,4]);
      
    }

    public struct Funcionario
    {
      public int Id {get; set;}

      public string Name {get; set;}
    }
  }
}
