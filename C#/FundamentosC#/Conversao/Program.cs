using System;

namespace Conversao
{
  class Program
  {
    static void Main()
    {
      //A dois tipos de conversão implicita e explicita

      //implicita
      /*
      Podem ser executadas com passagem de dados
      possuem tipos compativeis
      float valor = 25.8F;
      int outro = 25;
      valor = outro;
      Isto pode o contrário não
      */

      //Explicita
      /*
      Ocorre quando os tipos não são compativeis
      int inteiro = 100;
      uint inteiroSemSinal = (int) inteiro;
      */

      //Conversão explicita Parse
      /*
      Metodo presente em todos os tipos
      Usado para converter um caracter ou string para um tipo qualquer
      Caso haja alguma imcompatibilidade, dara um erro
      int inteiro = int.Parse("100");
      */

      //Conversão explicita Convert
      /*
      Uma classe
      Pode converter vários tipos de valores e não somente strings
      Caso haja alguma imcompatibilidade, gera um erro
      int inteiro = Convert.ToInt32("100");
      */
      Console.WriteLine("Hello World!");
    }
  }
}
