package JAVA;
import java.util.Scanner;

//I got the logic right, but my execution was wrong.

public class BinaryConverter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = sc.nextInt();
        int[] binary = new int[32]; // enough to hold binary of any 32-bit int
        int i = 0;
        int num = n;

        // Edge case for 0
        if (n == 0) {
            System.out.println("Binary: 0");
            return;
        }

        while (num > 0) {
            binary[i++] = num % 2;
            num = num / 2;
        }

        System.out.print("Binary: ");
        for (int j = i - 1; j >= 0; j--) {
            System.out.print(binary[j]);
        }

        System.out.println();
        //Time
        long start = System.currentTimeMillis();
        // your logic
        System.out.println("Time: " + (System.currentTimeMillis() - start) + " ms");

    }
}
