import java.util.*;
// import java.util.io;
public class DemoArrayList {
    public static void main(String[] args) {
        ArrayList<Integer> li= new ArrayList<>();
        li.add(10);
        li.add(20);
        li.add(30);
        li.add(2,25);
        
        for(Integer val:li)
        System.out.println(val);
        li.remove(1);
        for(int i=0;i<li.size();i++)
        System.out.println(li.get(i));
    }
}
