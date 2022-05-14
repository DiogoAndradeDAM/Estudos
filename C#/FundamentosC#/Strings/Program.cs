using System;
using System.Text;

namespace Strings
{
  class Program
  {
    static void Main()
    {

      /* Builder
      var texto = new StringBuilder(); //Serve para escrever texto grandes, bom para não gerar erros
      texto.Append("Este texto é um teste");
      texto.Append("é um teste");
      texto.Append("Este texto");
      texto.Append("Este texto é um teste");

      texto.ToString();
      Console.WriteLine(texto);
      */

      /* Manipuladores de Strings
      var texto = "Este texto é um teste";
      Console.WriteLine(texto.Replace("Este", "Isto"));
      Console.WriteLine(texto.Replace("e", "X"));

      var divisao = texto.Split(" ");
      Console.WriteLine(divisao[0]);
      Console.WriteLine(texto.Substring(5, 5));

      Console.WriteLine(texto.Trim());
      */

      /* Métodos adicionais
      var texto = "Este texto é um teste";
      Console.WriteLine(texto.IndexOf("é"));
      Console.WriteLine(texto.LastIndexOf("s"));
      Console.WriteLine(texto.Insert(5, " Aqui "));
      Console.WriteLine(texto.Remove(5, 5));
      Console.WriteLine(texto.Length);
      */
      
      /* Equals
      var texto = "Este texto é um teste";
      Console.WriteLine(texto.Equals("Este texto é um teste"));
      Console.WriteLine(texto.Equals("este texto é um teste"));
      Console.WriteLine(texto.Equals("este texto é um teste", StringComparison.OrdinalIgnoreCase));
      //Equals não é somente um método strings, há também para int e outros
      */

      /* //StartsWith e EndsWith
      var texto = "Este texto é um teste";
      Console.WriteLine(texto.StartsWith("Este"));
      Console.WriteLine(texto.StartsWith("este"));//Case-sensitive
      Console.WriteLine(texto.StartsWith(" Este"));

      Console.WriteLine(texto.EndsWith("teste"));
      Console.WriteLine(texto.EndsWith("Teste", StringComparison.OrdinalIgnoreCase));
      Console.WriteLine(texto.EndsWith(" teste"));
      */

      /* Comparando Strings
      var texto = "Testando";
      Console.WriteLine(texto.CompareTo("Testando"));// Case-sensitive compara tudo
      Console.WriteLine(texto.Contains("Test"));//Case-sensitive compara em partes
      Console.WriteLine(texto.Contains("test", StringComparison.OrdinalIgnoreCase));//não é case-sensitive
      */

      /* Interpolação
      var price = 10.2;
      var texto = string.Format("O preço do produto é {0} apenas na promoção", price);
      //$ antes do texto é uma interpolação
      //@ antes do texto e nega a leitura de command lines

      Console.WriteLine(texto);
      */

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
