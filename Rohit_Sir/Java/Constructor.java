public class Constructor{
    public int id;
    public String name;
    Constructor()
    {
        System.out.println("explicit default constructor");
    }
    Constructor(int id,String name)
    {
        this.id=id;
        this.name=name;
        System.out.println(" parameterized constructor");
    }
    Constructor(Constructor ob1)
    {
        this.id=ob1.id;
        this.name=ob1.name;
        System.out.println("copy constructor");
    }

    public static void main(String[] args) {
        Constructor o1=new Constructor(1,"amit");
        Constructor o2=new Constructor(o1);
        Constructor o3=new Constructor();
        System.out.println(o1.id);
        System.out.println(o1.name);
        System.out.println(o2.id);
        System.out.println(o2.name);
        System.out.println(o3.id);
        System.out.println(o3.name);

    }
}
