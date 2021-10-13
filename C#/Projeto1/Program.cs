using System;

namespace Projeto1
{
    class Program
    {
        enum Cor { Azul=32, Verde=1, Amarelo= 65, Vermelho};

        enum Opcoes {Criar=1, Deletar, Editar, Lista, Atualizar};
        public static void Main(string [] args)
        {
            /*
            mensagem();
            Console.WriteLine("Escreva um número");
            double num = double.Parse(Console.ReadLine());
            Console.WriteLine(calcular(num));
            */

            /*
            //Array

            string[] produtos = new string[5] {
                "Minecraft", 
                "FIFA", 
                "Portal", 
                "Dark Souls", 
                "Zelda"
            };

            Console.WriteLine(produtos[4]);
            */

            /*
            //Enum
            Cor cor_Favorita_Da_Carla = Cor.Azul;

            Console.WriteLine((Cor)65);
            Console.WriteLine(cor_Favorita_Da_Carla);
            */

            /*
            mensagem();
            Console.WriteLine("Selecionar uma das opções abaixo")
            ;
            Console.WriteLine("1-Criar\n2-Deletar\n3-Editar\n4-Listar\n5-Atualizar");
            int index = int.Parse(Console.ReadLine());
            Opcoes opcaoSelecionada = (Opcoes)index;

            switch (opcaoSelecionada) {
                case Opcoes.Criar:
                    Console.WriteLine("Você quer criar");
                    break;
                case Opcoes.Atualizar:
                    Console.WriteLine("Você quer atualizar");
                    break;
                case Opcoes.Deletar:
                    Console.WriteLine("Você quer deletar");
                    break;
                case Opcoes.Editar:
                    Console.WriteLine("Você quer editar");
                    break;
                case Opcoes.Lista:
                    Console.WriteLine("Você quer ver a lista");
                    break;
                default:
                    Console.WriteLine("Opção inválida");
                    break;
            }
                */

                //foreach

                string[] palavras = {"Victor", "Lima", "Guia do prog", "Formação", "Node", "Curso em Video", "Guanabara"};
                foreach(string palavra in palavras){
                    Console.WriteLine(palavra);
                }
        }
        static void mensagem(){
            Console.WriteLine("Olá programador");
        }

        static double calcular(double num){
            double numero = num+1;
            return numero;
        }
    }
}
