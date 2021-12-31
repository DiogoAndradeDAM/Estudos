using System;

class Program
{
  public static void Main()
  {
    string[] listOption = { "Sair do programa", "Somar", "Subtrair", "Dividir", "Multiplicar" };

    //Programa principal
    while (true)
    {
      Header();
      Menu(listOption);

      Console.Write("\n$_");
      short choose = Convert.ToInt16(Console.ReadLine());

      //Saida de dados do programa
      switch (choose)
      {
        case 0: Console.WriteLine("Encerrando Programa (.....)");return;
        case 1: Console.WriteLine($"A soma dos números é: {Calculadora.Soma()}"); break;
        case 2: Console.WriteLine($"A subtração dos números é: {Calculadora.Sub()}"); break;
        case 3: Console.WriteLine($"A Divisão dos números é: {Calculadora.Div()}"); break;
        case 4: Console.WriteLine($"A Multiplicação dos números é: {Calculadora.Multi()}"); break;
      }
    }
  }

  public static void Header()
  {
    Console.WriteLine("#=============#");
    Console.WriteLine("# Calculadora #");
    Console.WriteLine("#=============#");
  }

  public static void Menu(string[] list)
  {
    Console.WriteLine("Digite as opções abaixo:");
    for (int i = 0; i < list.Length; i++)
    {
      Console.WriteLine($" [{i}] \t {list[i]}");
    }
  }

  struct Calculadora
  {
    //Primeira pergunta
    private static int Ask1(){
      Console.WriteLine("+-----------------------------+");
      Console.Write("Digite o primeiro numero: ");
      int numChoose = Convert.ToInt32(Console.ReadLine());
      return numChoose;
    }
    //Segunda pergunta
    private static int Ask2(){
      Console.Write("Digite o segundo numero: ");
      int numChoose2 = Convert.ToInt32(Console.ReadLine());
      Console.WriteLine("+-----------------------------+");
      return numChoose2;
    }
    //Saida de dados da calculadora
    public static int Soma()
    {
      return Ask1() + Ask2();
    }
    public static int Sub()
    {
      return Ask1() - Ask2();
    }
    public static int Multi()
    {
      return Ask1() * Ask2();
    }
    public static int Div()
    {
      return Ask1() / Ask2();
    }
  }

}