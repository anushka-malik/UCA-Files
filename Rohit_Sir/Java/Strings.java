import java.util.Scanner;
public class Strings {

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        String str2="hello";
        String str3="Hello";
//        System.out.println(str.length());
//        System.out.println(str.toUpperCase());
//        System.out.println(str.toLowerCase());
       System.out.println(str.equals(str2));
       System.out.println(str.equals(str3));
        System.out.println(str.indexOf('o'));
        System.out.println(str.substring(1,4));

    }
}

//Strings in java are also immutable
//String functions:
//sc.nextLine()
//charAt, compareTo, toUpperCase,indexOf,substring
// Interning-save memory and new-seperate string is created


//String builder are mutable-
//Methods of stringbuilder class: charAt, setCharAt(ind,ch)change a chracter in string)
//append, insertCharAt(ind,ch), deleteCharAt(ind), reverse()
//indexOf(),substr(),contains(string)

