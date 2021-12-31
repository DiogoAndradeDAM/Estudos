using System;

namespace Variaveis
{
  public class Program
  {
    public static void Main()
    {
      //bytes e sbytes(bytes que trabalham com números negativos)
      //São usados para leitura de arquivos, seu uso é muit expecifico
      /*byte num1 = 127;*/

      //Numeros inteiros
      //short(16bit), int(32bit) e long(64bit)
      //aqueles que tem de o prefixo 'u' (significa unsigned) não possuem valores negativos
      /*
      short num2 = 32500;
      int num3 = 2000000000;
      long num4 = 20000000000;
      */

      //Numeros Reais
      //float(f 32bit), double(64bit) e decimal(m 128bit)
      /*
      double num5 = 1.7976931348623e308;
      */

      //Char(16bit)
      //Salva em formato Unicode e sua atribuição é com aspas simples

      //Null
      //null == void
      //Sempre que vc declara um valor com null se tentar exibi-lo dará erro no código
      //Para fazer atribuição de null é necessário ter ? depois do tipo da variavel
      /*int? idade = null;*/

      //Alias
      //alias é um apelido dado para os tipos, por isto na declaração os tipos começam com minusculo, verdadeiramente os tipos começam com maiusculas
      /*
      int num6 = 25; //alias
      Int32 num7 = 25; //Tipo
      */
    }
  }
}
