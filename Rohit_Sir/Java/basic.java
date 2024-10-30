import java.util.Scanner;
import java.util.*;

// Interfaces are reference type in java used to achieve abstraction.It contains abstract methods(method without any body, i.e.only declaration
// and these abstract methods are required to be implemented by the class implementing the interface.

interface calculator{
    public int add();
    public int sub();
}

class basic implements calculator{
    public int a;
    public int b;

    basic(int a,int b)
    {
        this.a=a;
        this.b=b; 
    }
  @Override public int add()
  {
    return a+b;
  }
  @Override public int sub()
  {
    return a-b;
  }

  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    basic obj= new basic(sc.nextInt(),sc.nextInt());
    System.out.println(obj.add());
    System.out.println(obj.sub());
  }
} 