using System;

namespace Strings
{
  class Program
  {
    static void Main()
    {
      var price = 10.2;
      var texto = string.Format("O preço do produto é {0} apenas na promoção", price);


      Console.WriteLine(texto);

      /* Guid
      var id = Guid.NewGuid();//Cria um sequência aleatória sempre que o programa é execultado
      id.ToString();

      //id = new Guid(); Cria um guid com a sequência preenchida por zeros
      //id = new Guid(""); Não converte
      id = new Guid("4b3cf532-6631-4dae-b735-9a35ccaad296");//Grid gerada copiada e colada aqui
      Console.WriteLine(id.ToString().Substring(0, 8));
      */
    }
  }
}
