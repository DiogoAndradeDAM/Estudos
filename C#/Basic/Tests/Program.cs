using System;

namespace Tests{
    public class Point{
        public int _x {get;}
        public int _y {get;}

        public Point(int x, int y)
        {
            this._x = x;
            this._y = y;
        }
    }

    public class Point3 : Point{
        public int _z {get;}

        public Point3(int x, int y, int z): base(x,y)
        {
            this._z = z;
        }
    }

    public class Container<T>
    {
        public T[]? c {get;}

        public void push(T value){
            c.Append(value);
        }

        public T GetValue(){
            return c.First();
        }
    }

    public class Program{
        public static void Main(string[] args)
        {
            Point3 p = new Point3(10, 5, 12);
            Point3 p2 = new Point3(11, 2, 32);

            Container<Point3> guardador = new Container<Point3>();
            guardador.push(p);
            guardador.push(p2);

            Console.WriteLine($"{guardador.GetValue()}");

        }
    }
}
