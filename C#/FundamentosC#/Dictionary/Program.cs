using System;
using System.Collections.Generic;

namespace Dictionary
{
    class Program
    {
        static void Main()
        {
            //Dictionary são listas de múltiplos tipos
            Dictionary<int, string> veiculos = new Dictionary <int, string>();

            veiculos.Add(10, "Carro");
            veiculos.Add(5, "Avião");
            veiculos.Add(0, "Navio");
            veiculos.Add(20, "Moto");
            veiculos.Add(15, "Monociclo");

            //veiculos.Clear();//Limpa o Dictionary
            Console.WriteLine($"Tamanho do Dictionary {veiculos.Count/*Retorna um int com a quantidade de items*/}");
            if(veiculos.ContainsKey(20)){//Busca uma chave dentro do dictionary, pode ser qualquer chave
                Console.WriteLine($"A chave {20} está na coleção");
            } else {
                Console.WriteLine($"a Chave {20} Não está na coleção");
            }

            veiculos.Remove(20);//remove o item da lista que possua a chave apontada
            veiculos[15]="Bicicleta";//Muda o valor a partir da chave

            Dictionary<int,string>.ValueCollection valores=veiculos.Values;

            foreach (string v in valores)
            {
                Console.WriteLine(v);
            }
        }
    }
}