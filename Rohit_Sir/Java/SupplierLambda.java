import java.util.*;
import java.util.function.Supplier;

// Supplier lambda expressions doesnot take any argument but in turn returns a value.
// Ex: Random number generator,Fibonacci series can be cited as examples of supplier lambda expression. 

public class SupplierLambda {
    public static void main(String[] args) 
    {
       Supplier<Double> randomgenerator = ()->{
        return (Math.random()*100);
       };


       System.out.println(randomgenerator.get());
       System.out.println(randomgenerator.get());
       

    }
}
