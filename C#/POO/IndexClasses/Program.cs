using System;

namespace IndexClasses
{
    class Program
    {
        static void Main()
        {
            Car carro = new Car();
            Console.WriteLine($"{carro[1]}");
            carro[1] = 200;
            Console.WriteLine($"{carro[1]}");
        }
    }

    class Car
    {

        private int[] VelMax = new int[5]{80, 120, 160, 240, 300};

        public int this[int i]
        {
            get{ return VelMax[i];}

            set{
                if(value<0){
                    VelMax[i] = 0;
                } else if(value>300){
                    VelMax[i] = 300;
                } else {
                    VelMax[i] = value;
                }
            }
        }
    }
}
