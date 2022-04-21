using System;
using System.Text;
using System.IO;

namespace EditorHTML
{
  public static class Editor
  {
    public static void Show(){
      Console.Clear();
      Console.BackgroundColor = ConsoleColor.White;
      Console.ForegroundColor = ConsoleColor.Black;
      Console.Clear();
      Console.WriteLine("MODO EDITOR");
      Console.WriteLine("-----------");
      Start();
    }

    public static void Start(){
      var text = new StringBuilder();

      do {
        text.Append(Console.ReadLine());
        text.Append(Environment.NewLine);
      } while(Console.ReadKey().Key != ConsoleKey.Escape);

      Console.WriteLine("---------------");

      Console.WriteLine(" Deseja salvar o arquivo?");
      Console.WriteLine("1 - Salvar");
      Console.WriteLine("2 - Descartar");
      Console.Write("Resposta: ");
      short answer = short.Parse(Console.ReadLine());
      
      switch(answer){
        case 1: Save(text.ToString()); Menu.Show(); break;
        case 2: Console.Clear(); Menu.Show(); break;
      }
    }

    public static void Save(string text){
      Console.WriteLine("---------------");
      Console.WriteLine("Escreva o nome do arquivo com o tipo");
      string? fileName = Console.ReadLine();
      Console.Write("Escreva o caminho para salvar o arquivo: ");
      string? path = Console.ReadLine();
      path += fileName;

      using(var file = new StreamWriter(path)){
        file.Write(text);
      }
      Console.WriteLine(" ");
      Console.WriteLine("Arquivo salvo com sucesso");
      Console.ReadLine();
    }
  }
}