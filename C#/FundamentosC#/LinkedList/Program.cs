using System;

namespace LinkedList
{
    class Program
    {
        static void Main(string[] args)
        {
            //LinkedList é um lista duplamente encadeade que pode acessar seu valores de frente e trás
            LinkedList<string> transp = new LinkedList<string>();

            transp.AddFirst("Carro");
            transp.AddFirst("Aviao");
            transp.AddFirst("Navio");
            transp.AddFirst("Motocicleta");//Adiciona o valor a primeira posição

            transp.AddLast("Bicicleta");//Adiciona o valor a última posição

            LinkedListNode<string> no = transp.FindLast("Navio");//Variavel nó que recebe o valor "Navio"
            transp.AddAfter(no,"Patinete");//Adiciona um valor a frente de outro nó
            no = transp.FindLast("Carro");
            transp.AddBefore(no, "Patins");

            //transp.Clear();//Limpa a lista

            foreach(string v in transp){
                Console.WriteLine(v);
            }

            /*transp.Remove("Carro");//Remove o valor
            transp.RemoveLast();
            transp.RemoveFirst();*/

            if(transp.Find("Carro")==null){
                Console.WriteLine("Não encontrado");
            } else {
                Console.WriteLine("Encontrado");
            }
        }
    }
}
