using System;

namespace ArrayMethods
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] vetor1 = new int[5];
            int[] vetor2 = new int[5];
            int[] vetor3 = new int[5];
            int[,] matriz = new int[2,5]{{11,22,00,44,55},{66,77,88,99,00}};

            Random random = new Random();
            for(int i=0; i<vetor1.Length; i++){
                vetor1[i] = random.Next(50);
            }
            Console.WriteLine("Elementos do vetor1");
            foreach(int n in vetor1){
                Console.Write($"{n} ");
            }
            Console.WriteLine("\n");

            //Array.BinarySearch(array, valor)
            Console.WriteLine("Array.BinarySearch");
            int procurando=33;
            int pos = Array.BinarySearch(vetor1, procurando);
            Console.WriteLine($"Valor {procurando} está na posição {pos}");
            Console.WriteLine();

            //Array.Copy(arrayOrigem, arrayDestino, quantidadeElementos)
            Console.WriteLine("Array.Copy");
            Array.Copy(vetor1, vetor2, vetor1.Length);
            foreach(int n in vetor2){
                Console.Write($"{n} ");
            }
            Console.WriteLine("\n");

            //CopyTo(arrayOrigem, aPartirDestaPosicao)
            Console.WriteLine("CopyTo");
            vetor1.CopyTo(vetor3, 0);
            foreach(int n in vetor3){
                Console.Write($"{n} ");
            }
            Console.WriteLine("\n");

            //public long GetLongLength(dimensao) retorna o tamanho do vetor
            Console.WriteLine("GetLongBound");
            long qtdeElementosVetor = vetor1.GetLongLength(0);
            Console.WriteLine($"Quantidade de elementos {qtdeElementosVetor}");
            Console.WriteLine();

            //public int GetLowerBound(dimensao) //retorna o menor indice de um vetor ou matriz
            Console.WriteLine("GetLowerBound");
            int menorIndiceVetor = vetor1.GetLowerBound(0);
            int menorIndiceMatriz = matriz.GetLowerBound(1);
            Console.WriteLine($"Quantidade de elementos {menorIndiceVetor}");
            Console.WriteLine();

            //public int GetUpperBound(dimensao) //retorna o maior indice de um vetor ou matriz
            Console.WriteLine("GetUpperBound");
            int maiorIndiceVetor = vetor1.GetUpperBound(0);
            int maiorIndiceMatriz = matriz.GetUpperBound(1);
            Console.WriteLine($"Quantidade de elementos {maiorIndiceVetor}");
            Console.WriteLine();

            //public object GetValue(long indice)
            Console.WriteLine("GetValue");
            int valor0 = Convert.ToInt32(vetor1.GetValue(3));
            int valor1 = Convert.ToInt32(matriz.GetValue(1, 3));
            Console.WriteLine($"Valor da posição 3 do vetor1: {valor0}");
            Console.WriteLine();

            //public static int IndexOf(array, valor)
            Console.WriteLine("IndexOf");
            int indice1 = Array.IndexOf(vetor1, 3);
            Console.WriteLine($"Indice do primeiro valor 3: {indice1}");
            Console.WriteLine();

            //public static int LastIndexOf(array, valor)
            Console.WriteLine("LastIndexOf");
            int indice2 = Array.LastIndexOf(vetor1, 3);
            Console.WriteLine($"Indice do primeiro valor 3: {indice2}");
            Console.WriteLine();

            //public static void Reverse(array)
            Console.WriteLine("Reverse");
            Array.Reverse(vetor1);
            foreach(int n in vetor1){
                Console.Write($"{n} ");
            }
            Console.WriteLine("\n");

            //public void SetValue(object valor, long posicao)
            Console.WriteLine("SetValue");
            vetor2.SetValue(99, 0);//99 na posição 0
            for(int i=0; i<vetor2.Length; i++){
                vetor2.SetValue(0, i);
            }
            Console.WriteLine("Vetor 2");
            foreach(int n in vetor2){
                Console.Write($"{n} ");
            }
            Console.WriteLine("\n");

            //public static void Sort(Array)
            Console.WriteLine("Sort");
            Array.Sort(vetor1);
            Array.Sort(vetor2);
            Array.Sort(vetor3);
            Console.WriteLine("Vetor1");
            foreach(int n in vetor1){
                Console.Write($"{n} ");
            }
            Console.WriteLine("\n");

            Console.WriteLine("Vetor2");
            foreach(int n in vetor2){
                Console.Write($"{n} ");
            }
            Console.WriteLine("\n");

            Console.WriteLine("Vetor3");
            foreach(int n in vetor3){
                Console.Write($"{n} ");
            }
            Console.WriteLine("\n");

        }
    }
}
