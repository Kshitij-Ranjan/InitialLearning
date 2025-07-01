package JAVA;
import java.util.*;
public class Recursion_II_Q3{
    public static int first = -1;
    public static int last = -1;
    public static void findOccurance(String str, char ch, int indx){
        if(indx == str.length()){
            System.out.println(first);
            System.out.println(last);
            return;
        }
        char currChar = str.charAt(indx);
        if(currChar == ch){
            if(first == -1){
                first = indx;
            } else {
                last = indx;
            }
        }

        findOccurance(str, ch, indx+1);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("str: ");
        String str = sc.next();
        findOccurance(str,'a',0);
    }
}
