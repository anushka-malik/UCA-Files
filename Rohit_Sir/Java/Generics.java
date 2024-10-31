public class Generics<V>{
    public V value;

    Generics(V val)
    {
        value=val;
    }
    public void print()
    {
        System.out.println("current obj value is: "+this.value);
    }

    public static void main(String[] args) {
        Generics<Integer> o1=new Generics<Integer>(20);
        o1.print();
        Generics<String> o2=new Generics<String>("hello");
        o2.print();
        Generics<Float> o3=new Generics<Float>(2.3f);
        o3.print();
        Generics<Double> o4=new Generics<Double>(20.45);
        o4.print();
    }
}