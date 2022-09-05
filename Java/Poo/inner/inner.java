class OuterClass
{
    int x = 10;

    class InnerClass
    {
        public int y = 5;

        public int getY(){return this.y;}
        public int getX(){return x;}
    }
}

class inner
{
    public static void main(String args[])
    {
        OuterClass outer = new OuterClass();
        OuterClass.InnerClass myInner = outer.new InnerClass();
        System.out.println(myInner.getX());
        System.out.println(myInner.getY());
    }
}