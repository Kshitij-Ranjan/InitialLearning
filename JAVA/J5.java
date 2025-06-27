package JAVA;
import java.util.Scanner;
public class J5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        //compare
        String name1 = sc.nextLine();
        String name2 = sc.nextLine();

        //1 s1 > s2 : +ve value
        //2 s1 == s2 : 0
        //3 s1 < s2 : -ve value

        if (name1.compareTo(name2) == 0) {
            System.out.println("Strings are equal");
        } else if (name1.compareTo(name2) > 0) {
            System.out.println("name1 is greater");
        } else {
            System.out.println("name1 is smaller");
        }
    }
}
