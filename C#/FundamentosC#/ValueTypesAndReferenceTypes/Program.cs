using System;

namespace ValueTypesAndReferenceTypes
{
  class Program
  {
    static void Main()
    {
      //A memória é divida em duas Heap e Stack
      //Heap armazena dados
      //Stack armazena a referencia para os dados
      //O garbage collector não acessa a memória Stack
      //Stacks após uma atribuição de valores por outra variavel, elas se mantem independentes (struct e enums)
      //Heap após uma atribuição de valores por outra variavel, a variavel que recebeu aponta para o mesmo valor na memória da que cedeu, ou seja, as duas terão o mesmo valor (class, objects e arrays)
    }
  }
}
