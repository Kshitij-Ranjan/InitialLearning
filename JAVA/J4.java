package JAVA;

import java.util.Scanner;

public class J4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter row size (m): ");
        int m = sc.nextInt();
        System.out.println("Enter column size (n): ");
        int n = sc.nextInt();
        int[][] arr = new int[m][n];
        System.out.println("Enter the number: ");
        int num = sc.nextInt();
        int row = -1, col = -1;
        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                //System.out.print("Element at (" + i + "," + j + "): ");
                arr[i][j] = sc.nextInt();
                if (arr[i][j] == num) {
                    row = i+1;
                    col = j+1;
                }
            }
        }  
        System.out.println("Your number is found at: (" + row + "," + col + ")");
    }
}
