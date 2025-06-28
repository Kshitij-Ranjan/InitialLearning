package JAVA;
import java.util.Scanner;
public class BubbleSort {

    // time complexity = O (n^2)

    static void printArray(int[] bubbles){
        // printing array
        for (int bubble : bubbles) {
            System.out.print(bubble + " ");
        }
    }

    static void sort(int[] bubbles){
        for(int i = 0 ; i< bubbles.length ; i++){               // to leave the elements already sorted
            for(int j = 0 ; j < bubbles.length - 1 - i ; j++){  // run loop in elements not sorted
                if(bubbles[j] > bubbles[j+1]){
                    // sorting
                    int temp = bubbles[j];
                    bubbles[j] = bubbles[j+1];
                    bubbles[j+1] = temp;
                }
            }
        }
        System.out.println("Bubble sorted array: ");
        printArray(bubbles);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        //importing number of array elements
        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();
        int[] bubbles = new int[n];
        for(int i = 0; i < bubbles.length ; i++){
            bubbles[i] = sc.nextInt();
        }

        sort(bubbles);
    }
}
