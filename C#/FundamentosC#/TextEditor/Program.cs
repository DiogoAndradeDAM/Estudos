using System;
using System.IO; //para manipular arquivos

namespace TextEditor
{
  public class Program
  {

    public static void Main()
    {
      Menu();
    }

    static void Menu(){
      Console.Clear();
      Console.WriteLine("O que você deseja fazer?");
      Console.WriteLine("1 - Abrir arquivo");
      Console.WriteLine("2 - Novo arquivo");
      Console.WriteLine("0 - Sair do programa");
      short option = short.Parse(Console.ReadLine());

      switch (option){
        case 0: System.Environment.Exit(0); break;
        case 1: Abrir(); break;
        case 2: Editar(); break;
        default: Menu(); break;
      }
    }

    static void Abrir(){
      Console.Clear();
      Console.WriteLine("Qual caminho do arquivo?");
      string path = Console.ReadLine();

      using(var file = new StreamReader(path)){
        string text = file.ReadToEnd();
        Console.WriteLine(text);
      }

      Console.WriteLine();
      Console.ReadLine();
    }

    static void Editar(){
      Console.Clear();
      Console.WriteLine("Digite seu texto abaixo (ESC para sair)");
      Console.WriteLine("-----------------------");
      string text = "\0";

      /*Readkey() le uma chave digitada e Key transforma em algo "vísivel e ConsoleKey.key é um tipo de tecla especifica*/
      do{
        text += Console.ReadLine();
        text += Environment.NewLine; //Coloca uma quebra de linha
      }
      while(Console.ReadKey().Key != ConsoleKey.Escape);

      Salvar(text);
    }

    static void Salvar(string text){
      Console.Clear();
      Console.WriteLine("Qual caminho para salvar o arquivo?");
      var path = Console.ReadLine();

      /*StreamWriter => escreve um arquivo
      StreamReader => lê um arquivo
      É importante abrir e fechar os Streams, mas vc pode usar o using para facilitar o processo*/

      using (var file = new StreamWriter(path)){
        file.Write(text);
      }
      Console.WriteLine($"Arquivo {path} salvo com sucesso");
      Console.ReadLine();
    }
  }
}


