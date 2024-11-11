import java.util.*;
import java.util.function.Function;


public class FunctionLambda {
    public static void main(String[] args) {
        Function<String,String> lower = (str)->{
            return str.toLowerCase();
        } ;
// There is also a concept of chaining in lambda expressions where in the nested lambda expressions can be achieved one after other.The outer lambda
// expression is evaluated first and then after the inner one is executed. 

        Function<String,String> removespace = (str)->{
            return str.trim();
        } ;


    System.out.println(removespace.andThen(lower).apply("  hello world   "));   // chaining

    }
}
