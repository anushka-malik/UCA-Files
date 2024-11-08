import java.util.*;
import java.io.*;


// Comparator - is external to class.We create multiple separate classes (that implement Comparator) to compare by different members.
class NameComparator implements Comparator<Student>{
    public int compare(Student s1,Student s2)
    {
        return (s1.name.compareTo(s2.name));
    }
}


// Comparable() is a method which is implemented by the class itself . It is used for comparison or sorting of any user-defined datatype.
public class Student implements Comparable<Student>{
    String name;
    Integer roll;
    Integer marks;
    Student(String n,  Integer r,Integer m)
    {
        name=n;
        roll=r;
        marks=m;
    }
   public int compareTo(Student s)
   {
    return this.marks-s.marks;
   }

   public void display()
   {
    System.out.println("Name: "+name+" roll :"+roll+" marks: "+marks);
   }
   public static void main(String[] args) {
    List<Student> li=new ArrayList<Student>();
    li.add(new Student("aman",102,80));
    li.add(new Student("bh",103,50));
    li.add(new Student("chavi",104,90));
    li.add(new Student("dev",105,40));

    NameComparator comp=new NameComparator();
    Collections.sort(li,comp);

    for(Student st:li)
    {
        System.out.println(st.name+" "+st.marks);
    }
    // Collections.sort(li);
    System.out.println();
    System.out.println();
    
    // for(Student st:li)
    // {
    //     System.out.println(st.name+" "+st.marks);
    // }
    
   }

}


