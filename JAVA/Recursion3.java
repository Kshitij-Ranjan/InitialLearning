package JAVA;
import java.util.*;
public class Recursion3 {
    static int calcPower(int x, int n){
        if( n == 0 ){ // base case 1
            return 1;
        }
        if( x==0){ // base case 2
            return 0;
        }
        //stack hight = O (x^n)......... for x = 17 , n = 7 , execution time = 30ms
//        int xPownm1 = calcPower(x, n-1);
//        return x * xPownm1;

        // stack height = O(log(n) base2 ).............for x = 17 , n = 7 , execution time = 10ms
        if( n%2 == 0){
            // if n is even
            return calcPower(x,n/2) * calcPower(x, n/2);
        }
        else{ // if n is odd
            return calcPower(x,n/2) *  calcPower(x, n/2) * x;
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
        int ans = calcPower(x,n);
        System.out.println(ans);
    }
}
