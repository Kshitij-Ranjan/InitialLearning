package JAVA;

import java.util.Scanner;

public class J1{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the pattern (n): ");
        int n = scanner.nextInt();
            for(int i = 0;i<n;i++){
                for(int j = 0;j<n;j++){
                    if(i == n-1 || j == 0 || i >= j){
                        if((i+j)%2 == 0){
                            System.out.print(1 + "  ");
                        } else{
                            System.out.print(0 + "  ");
                        }
                    } else {
                        System.out.print("   ");
                }
                }
                System.out.println();
            }
            scanner.close();
    }
}