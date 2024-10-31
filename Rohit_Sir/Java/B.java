// Java doesnot support multiple class inheritence to avoid ambiguity issues. In provides the mechanism of interfaces and abstract classes to achieve
// the functionality of multiple class inheritence.


//  It supports only single class inheritence


public class B extends A {
    B()
    {
        System.out.println("Constructor from B !");
    }
    public void m1()             // overrrides m1() from A
    {
        System.out.println("m1 from B");
    }

    public void m2(){
        System.out.println("m2 from B");
    }

    public static void main(String[] args) {
        B b=new B();      // wnen object of B is created , it internally calls parent's class constructor as it inherits parent class A
        b.m1();
        b.m2();
        
    }
}
