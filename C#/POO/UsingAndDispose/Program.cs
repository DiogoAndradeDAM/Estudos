using System;

namespace UsingAndDispose
{
  class Program
  {
    static void Main(string[] args)
    {
      /*//Método normal, chance de erro humano, caso esqueça o Dispose()
      var pagamento = new Pagamento();
      pagamento.Dispose();
      */

      //Executa a execução e destruição do objeto para vc
      using(var pagamento = new Pagamento())
      {
        Console.WriteLine("Processando o pagamento");
      }
    }
  }

  public class Pagamento : IDisposable//Interface
  {
    public Pagamento()
    {
      Console.WriteLine("Iniciando o pagamento");
    }

    public void Dispose(){//Destruidor
      Console.WriteLine("Finalizando o pagamento");
    }
  }
}
