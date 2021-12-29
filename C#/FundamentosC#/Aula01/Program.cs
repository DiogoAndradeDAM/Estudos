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

      if (choose == 0)
      {
        Console.WriteLine("Encerrando Programa (||...)");
        break;
      }

      Console.WriteLine("+-----------------------------+");
      Console.Write("Digite o primeiro numero: ");
      int numChoose = Convert.ToInt32(Console.ReadLine());

      Console.Write("Digite o segundo numero: ");
      int numChoose2 = Convert.ToInt32(Console.ReadLine());

      switch (choose)
      {
        case 0: break;
        case 1: Console.WriteLine($"A soma dos números é: {Soma(numChoose, numChoose2)}"); break;
        case 2: Console.WriteLine($"A subtração dos números é: {Sub(numChoose, numChoose2)}"); break;
        case 3: Console.WriteLine($"A Divisão dos números é: {Div(numChoose, numChoose2)}"); break;
        case 4: Console.WriteLine($"A Multiplicação dos números é: {Multi(numChoose, numChoose2)}"); break;
      }

      Console.WriteLine("+-----------------------------+");
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

  public static int Soma(int num, int num2)
  {
    return num + num2;
  }
  public static int Sub(int num, int num2)
  {
    return num - num2;
  }
  public static int Multi(int num, int num2)
  {
    return num * num2;
  }
  public static int Div(int num, int num2)
  {
    return num / num2;
  }
}
