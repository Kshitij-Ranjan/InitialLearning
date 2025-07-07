package JAVA;

import java.util.Scanner;

public class Recursion_III_Q1 {
    public static void printPerm(String str, String permutation){
        if(str.length() == 0){
            System.out.println(permutation);
            return;
        }

        for(int i = 0; i<str.length();i++){
            char currChar = str.charAt(i);
            //"abc" -> "ab" or "bc" or "ac"
            String newStr = str.substring(0,i) + str.substring(i+1);
            printPerm(newStr , permutation+currChar);
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String y = sc.next();
        String str = "abcd";
        printPerm(str , "");
    }
}
