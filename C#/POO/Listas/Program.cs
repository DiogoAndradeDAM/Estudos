using System;
using System.Collections.Generic;

namespace Listas
{
  class Program
  {
    static void Main()
    {
      var payments = new List<Payment> ();

      payments.Add(new Payment(1));
      payments.Add(new Payment(2));
      payments.Add(new Payment(3));
      payments.Add(new Payment(4));
      payments.Add(new Payment(5));

      foreach(var payment in payments){
        Console.WriteLine(payment.Id);
      }

      var payment2 = payments.First(x => x.Id == 3/*Expressão*/);//Procura dentro da lista
      Console.WriteLine(payment2);

    }
  }

  public class Payment 
  { 
    public int Id {get; set;}

    public Payment(int id)
    {
      Id = Id;
    }
  }
}
