package JAVA;
import java.util.Scanner;

public class BinaryToDecimal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Binary number: ");
        String str = sc.next();
        int[] binary = new int[str.length()];
        for (int i = 0; i < str.length(); i++) {
            binary[i] = str.charAt(i) - '0';
        }

        int number = 0;
        int n = binary.length;
        for (int i = 0; i < n; i++) {
            number += binary[i] * Math.pow(2, n - 1 - i);
        }
        System.out.println(number);
    }
}
