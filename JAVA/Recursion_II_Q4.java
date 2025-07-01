package JAVA;
import java.util.*;
public class Recursion_II_Q4 {

    public static boolean checkSorted(int[] arr, int count){
        if(count == arr.length-1){
            return true;
        }
        if(arr[count] > arr[count+1]){
            return false;
        } else{
            return checkSorted(arr,count+1);
        }
    }

    public static void main(String[] args) {
        int[] arr = {1,2,3,6,5};
        System.out.println(checkSorted(arr, 0));
    }
}
