package JAVA;
import java.util.Scanner;
public class InsertionSort {

    //time complexity =

    static void printArray(int[] bubbles){
        // printing array
        for (int bubble : bubbles) {
            System.out.print(bubble + " ");
        }
    }

    static void sort(int[] bubbles){
        int sorted = 0;
        for(int i = 1 ; i < bubbles.length ; i++ ) {
            if (bubbles[i] > bubbles[sorted]) {
                bubbles[sorted+1] = bubbles[i];
                sorted++;
            } else {
                int temp = bubbles[i]; // replaced key with temp
                int j = sorted;
                while (j >= 0 && bubbles[j] > temp) {
                    bubbles[j + 1] = bubbles[j];
                    j--;
                }
                bubbles[j + 1] = temp;
                sorted++;
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
