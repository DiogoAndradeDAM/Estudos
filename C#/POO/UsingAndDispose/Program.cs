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
      var pessoa1 = new Pessoa(12);
      var pessoa2 = new Pessoa(12);
      Console.WriteLine(pessoa1 == pessoa2);
      Console.WriteLine(pessoa1.Equals(pessoa2));

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

    public void Dispose(){//Finalizador que vem do IDisposable
      Console.WriteLine("Finalizando o pagamento");
    }
  }

  public class Pessoa : IEquatable<Pessoa>
  {
    public Pessoa(int id)
    {
      this.id = id;
    }
    public int id {get; set;}

    public bool Equals(Pessoa pessoa){
      return id == pessoa.id;
    }
  }
}
