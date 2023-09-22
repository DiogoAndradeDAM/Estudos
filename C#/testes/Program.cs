using System;
using System.IO;

namespace testes
{
    class Program
    {
        public static void Main(string[] args)
        {
            StreamWriter output = new StreamWriter("teste.txt");

            output.WriteLine("Hello World");
            output.WriteLine("I am Diogo Andrade");

            output.Flush();

            output.Close();

            StreamReader input = new StreamReader("teste.txt");

            string? txtLine = input.ReadLine();
            while(txtLine != null){
                Console.WriteLine(txtLine);
                txtLine = input.ReadLine();
            }

            input.Close();
            Console.WriteLine();

            FileInfo fileInfo = new FileInfo("teste.txt");
            Console.WriteLine(fileInfo.FullName);
            Console.WriteLine(fileInfo.DirectoryName);
            Console.WriteLine(fileInfo.Length);
            Console.WriteLine(fileInfo.Name);
            Console.WriteLine(fileInfo.LastAccessTime);

            Console.ReadKey();
        }
    }
}
