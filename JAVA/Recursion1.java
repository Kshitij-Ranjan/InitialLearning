package JAVA;
import java.util.Scanner;
public class Recursion1 {
    static void num(int i,int n, int fac){
        if(i==n+1){

            System.out.println(fac);
            return;
        }
        fac = fac*i;
        num(i+1, n , fac);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i = 1;
        int fac = 1;
        num(i, n ,fac);
    }
}
