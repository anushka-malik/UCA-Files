import java.util.*;
import java.util.function.Predicate;

public class PredicateLambda {
    public static void main(String[] args) {


        // check prime predicate function
        Predicate<Integer> isPrime = (val)->{
            if(val==1)
            return false;
            if(val==2)
            return true;
            for(int i=3;i<=val/2;i++)
            {
                 if(val%i==0)
                 return false;
            }
            return true;
        };

        System.out.println(isPrime.test(11));
        System.out.println(isPrime.test(102));
        System.out.println(isPrime.test(33));


        // Predicate chaining
        Predicate<Integer> greaterthanTen = (i)->(i>10);
        Predicate<Integer> lessthanTwenty = (i)->(i<20);
        
        System.out.println(greaterthanTen.and(lessthanTwenty).test(20));

    }
}
