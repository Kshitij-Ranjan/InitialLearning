package JAVA;
import java.util.*;
public class Recursion_II_Q2 {
    public static void revStr(String str, int indx){
        if(indx == 0){
            System.out.print(str.charAt(indx));
            return;
        }
        System.out.print(str.charAt(indx));
        revStr(str,indx-1);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("str: ");
        String str = sc.next();
        System.out.print("rev: ");
        revStr(str,str.length()-1);
    }
}
