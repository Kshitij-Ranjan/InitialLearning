package JAVA;
import java.util.Scanner;
public class SelectionSort {

    //time complexity = O (n^2)

    static void printArray(int[] bubbles){
        // printing array
        for (int bubble : bubbles) {
            System.out.print(bubble + " ");
        }
    }

    static void sort(int[] bubbles){
        // replacing smallest to largest
        for(int i = 0 ; i < bubbles.length - 1 ; i++ ){
            int indexSmallest = i;
            int previousSmallestIndex = indexSmallest;
            for(int j = i+1; j< bubbles.length ; j++){
                if(bubbles[indexSmallest] > bubbles[j]){
                    indexSmallest = j;
                }
            }
            // sorting
            int temp = bubbles[indexSmallest];
            bubbles[indexSmallest] = bubbles[previousSmallestIndex];
            bubbles[previousSmallestIndex] = temp;
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
