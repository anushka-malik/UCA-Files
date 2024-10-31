import java.util.*;
import java.lang.*;
import java.io.*;


 interface Shape{
    public double Area();
    public int NumberOfSides();
    public String ShapeName();
};


 class Circle implements Shape{
    double PI=3.14;
    double radius;
    
    Circle(double r)
    {
        radius=r;
    }
    
    @Override public String ShapeName()
    {
        return "Circle";
    }
    
    @Override public int NumberOfSides()
    {
        return 0;
    }
    
    @Override public double Area()
    {
        double ar= PI*radius*radius;
        return ar;
    }
    
};

//Abstract classes are blueprints for other classes to derive from. They contains both , abstract as well as non-abstract methods(methods with)
// common implementation. 

// They cannot be instantiated( objects cannot be created).
abstract class Quad implements Shape{
  @Override public String ShapeName()
    {
        return "quad";
    }
    
    @Override public int NumberOfSides()
    {
        return 4;
    }
    
    @Override public abstract double Area() ;
};

 class Rectangle extends Quad{
    double l;
    double b;
    
    Rectangle(double l,double b)
    {
        this.l=l;
        this.b=b;
    }
    
    @Override public String ShapeName()
    {
        return "Rectangle";
    }
    
    @Override public double Area()
    {
       return (double) (l*b);
    }
    
};

 class Square extends Rectangle{
    double side;
    
    Square(int s)
    {
        super(s,s);
    }
    
     @Override public String ShapeName()
    {
        return "Square";
    }
};


class UCA
{
	public static void main (String[] args) 
	{
		// your code goes here
       Circle c= new Circle(2);
       System.out.println("This is "+ c.ShapeName());
       System.out.println("Area :"+ c.Area());
       System.out.println("Sides :"+ c.NumberOfSides());
       
       Rectangle r= new Rectangle(2,3);
       System.out.println("This is "+  r.ShapeName());
       System.out.println("Area :"+  r.Area());
       System.out.println("Sides :"+  r.NumberOfSides());
       
       Square s= new Square(2);
       System.out.println("This is "+  s.ShapeName());
       System.out.println("Area :"+  s.Area());
       System.out.println("Sides :"+  s.NumberOfSides());
       
	}
}
