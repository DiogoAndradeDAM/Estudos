// See https://aka.ms/new-console-template for more information
using System;
namespace Delegates
{
  class Program
    {
    static void RealizarPagamento(double valor){
      Console.WriteLine($"Pago o valor de {valor}");
    }

    static void Main(){
    var pagar = new Pagamento.Pagar(RealizarPagamento);
    pagar(25);
    }
  }

  public class Pagamento
  {
    public delegate void Pagar(double valor);
  }
}