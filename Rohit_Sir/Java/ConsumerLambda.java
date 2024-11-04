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
        Consumer<ArrayList<Integer>> dispList=(li)->{
            for(Integer val:li)
            System.out.print(val+" ");
        };

        ArrayList<Integer> li=new ArrayList<Integer>();
        System.out.println("enter n:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
        li.add(sc.nextInt());
       
        dispList.accept(li);

    }
}
