using System;

namespace Basico
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Student diogo = new Student(17, "Diogo Andrade", 1.69f, 14);
            Student christian = new Student(17, "Christian Rodrigues", 1.69f, 14);
            Console.WriteLine(diogo.ToString());
            Console.WriteLine(christian.ToString());
        }
    }

    public class Person
    {
        protected int _age;
        protected string _name;
        protected float _size;

        public int Age
        {
            get => _age;
            set => _age = value;
        }
        public string Name
        {
            get => _name;
            set => _name = value;
        }
        public float Size
        {
            get => _size;
            set => _size = value;
        }
        public Person()
        {
            this._age = 0;
            this._name = "inmaed";
            this._size = 0.0f;
        }
        public Person(int age, string name, float size)
        {
            this._age = age;
            this._name = name;
            this._size = size;
        }
    }

    public class Student : Person
    {
        private int _room;
        public int Room
        {
            get => _room;
            set => _room = value;
        }

        public Student()
        : base()
        {
            this._room = 0;
        }

        public Student(int age, string name, float size, int room)
        : base(age, name, size)
        {
            this._room = room;
        }

        public new string ToString()
        {
            return $"Name: {this.Name} \nAge: {this.Age} \nSize: {this.Size} \nRoom: {this.Room}\n";
        }
    }
}
