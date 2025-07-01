package JAVA;

import java.util.Scanner;

public class Recursion_II_Q1 {
    static int count = 1; // static counter to track move number

    public static void towerOfHanoi(int n, String src, String helper, String dest){
        if(n == 1){
            System.out.println(count + ". transfer disk " + n + " from " + src + " to " + dest);
            count++;
            return;
        }
        towerOfHanoi(n - 1, src, dest, helper);
        System.out.println(count + ". transfer disk " + n + " from " + src + " to " + dest);
        count++;
        towerOfHanoi(n - 1, helper, src, dest);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("n: ");
        int n = sc.nextInt();
        towerOfHanoi(n, "S", "H", "D");
    }
}
