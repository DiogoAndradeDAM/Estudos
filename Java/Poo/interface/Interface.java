/*
Interface methods do not have a body - the body is provided by the "implement" class
On implementation of an interface, you must override all of its methods
Interface methods are by default abstract and public
Interface attributes are by default public, static and final
An interface cannot contain a constructor (as it cannot be used to create objects)
*/
interface ISay
{
    public void sayAge(int _age);
}

interface IBody
{
    public void talk();
    public void talkMy(String name);
}

class Human implements IBody, ISay
{
    public void talk(){System.out.println("Hello World");}
    public void talkMy(String name){System.out.println("My name is "+name);}
    public void sayAge(int _age){System.out.println("My age is "+_age);}
}

class Interface
{
    public static void main(String args[])
    {
        Human p1 = new Human();
        p1.talk();
        p1.talkMy("Diogo");
        p1.sayAge(17);
    }
}