using System;

namespace ErrorsExceptions
{
  class Program
  {
    static void Main(string[] args)
    {
      int[] arr = new int[3];

      try
      {
        for(int index=0; index<10; index++){
          Console.WriteLine(arr[index]);
        }
      }
      catch(Exception ex)//Os parênteses é opcional e serve para pegar o erro
      {
        Console.WriteLine(ex.InnerException);
        Console.WriteLine(ex.Message);
        Console.WriteLine("Ops, algo deu errado");
      }
    }
  }
}
