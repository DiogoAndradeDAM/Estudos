using System;

namespace TesteExe
{
  class Teste
  {
    static void Main(string[] args)
    {
      Console.WriteLine("Eae estou testando se consigo fazer um executavel em C#");
      Console.Write("Escreva ser nome [nao coloque pontuacao]: ");
      string name = Console.ReadLine();

      switch(name.ToLower())
      {
        case "gui": Console.WriteLine("Cadê o twitter?"); break;
        case "joaozinhodasneves": Console.WriteLine("Como usou isto no Linux?"); break;
        case "lis": Console.WriteLine("Olá taciturno"); break;
        case "tico": Console.WriteLine("Tico the Duck Lord"); break;
        case "okami": Console.WriteLine("Está... Okami Nechie hoje?"); break;
        case "pite": Console.WriteLine("pitinhozinho"); break;
        case "ricardo": Console.WriteLine("Hail Ricardo"); break;
        case "davi": Console.WriteLine("Eae David"); break;
        default: Console.WriteLine("Você digitou seu nome errado, pode ter sido a pontuação. Considere um apelido ou o jeito que o Diogo te chama"); break;
      }
      Console.Write("Aperte Enter para sair");
      Console.ReadLine();
    }
  }
}