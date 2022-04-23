using System;

namespace ErrorsExceptions
{
  class Program
  {
    static void Main(string[] args)
    {
      int[] arr = new int[3];

      try
      {
        /*
        for(int index=0; index<10; index++){
          Console.WriteLine(arr[index]);
        }
        */
        Cadastrar("");
      }
      catch(IndexOutOfRangeException ex) //é possivel se ter múltiplos catchs para diferentes tipos de erros, mas o genéricos deve senore estar por último
      {
        Console.WriteLine(ex.InnerException);
        Console.WriteLine(ex.Message);
        Console.WriteLine("Não encontrei o índice na lista");
      }
      catch(ArgumentNullException ex)
      {
        Console.WriteLine(ex.InnerException);
        Console.WriteLine(ex.Message);
        Console.WriteLine("Falha ao cadastrar texto");
      }
      catch(MinhaException ex)
      {
        Console.WriteLine(ex.InnerException);
        Console.WriteLine(ex.Message);
        Console.WriteLine(ex.QuandoAconteceu);
        Console.WriteLine("Ops, algo deu errado");
      }
      catch(Exception ex)//Exception genérico //Os parênteses é opcional e serve para pegar o erro
      {
        Console.WriteLine(ex.InnerException);
        Console.WriteLine(ex.Message);
        Console.WriteLine("Ops, algo deu errado");
      }
      finally
      {//Finally fecha o arquivo dando certo ou errado, pois erros não fecham arquivos e o Exception não é desligado
        Console.WriteLine("Chegou ao fim");
      }
    }

    static void Cadastrar(string texto){
      if(string.IsNullOrEmpty(texto))
        throw new ArgumentNullException("O texto não pode ser nulo ou vazio");
        //throw new MinhaException(DateTime.Now);
    }
  }

  public class MinhaException : Exception//Exception criadas por mim atráves da herança da classe Exception
  {
    public MinhaException(DateTime date)
    {
      QuandoAconteceu = date;
    }

    public DateTime QuandoAconteceu {get; set;}
  }
}
