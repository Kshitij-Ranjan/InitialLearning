package JAVA;
import java.util.Scanner;
public class Recursion1 {
    static void num(int i,int n, int fact){
        if(i==n+1){
            System.out.println(fact);
            return;
        }
        fact = fact*i;
        num(i+1, n , fact);
        //this whole is equivalent to
        //for(int i = 1;i <= n ; i+1){
        //  fact = fact*i;
        // }
        //System.out.println(fact);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        num(1, n ,1);
    }
}
