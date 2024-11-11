import java.util.*;
import java.util.function.Consumer;

public class ConsumerLambda {
    public static void main(String[] args) {

        // Integer consumer
        Consumer<Integer> consume=(val)->{
            System.out.println("value consumed :"+val);
        };
        consume.accept(10);

        // consumer to display an array
        Consumer<List<Integer>> dispList=(li)->{
            for(Integer val:li)
            System.out.print(val+" ");
        };

       List<Integer> arr=List.of(1,2,3,4,5);
        dispList.accept(arr);

    }
}
