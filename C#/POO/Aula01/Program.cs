using System;

namespace Aula01
{
  class Progrma
  {
    static void Main(string[] args)
    {
      var pagamento = new PagamentoBoleto(DateTime.Now);
      pagamento.Pagar("1234");
    }
  }

  public class Pagamento
  {
    public DateTime DataPagamento { get; set; }

    //public Pagamento() { } //Pode haver um método construtor sem parâmetros, isto faz com que não seja mais obrigatório colocar as propriedades ao instânciar um objeto

    public Pagamento(DateTime vencimento)
    {
      Console.WriteLine("Iniciando o pagamento");
      DataPagamento = DateTime.Now;
    }

    public virtual void Pagar(string number){
      Console.WriteLine("Pagando");
    }
  }

  public class PagamentoBoleto : Pagamento
  {
    public PagamentoBoleto(DateTime vencimento)
    :base(vencimento)
    {
      
    }

    public override void Pagar(string number){
      base.Pagar(number);
      Console.WriteLine("Pagar Boleto");
    }
  }
}