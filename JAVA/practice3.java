package JAVA;

import java.util.Arrays;
import java.util.Scanner;

public class practice3 {
    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n =0;
        Scanner sc = new Scanner(System.in);
        if(nums1.length >= nums2.length){
            n = nums1.length;
        } else{
            n = nums2.length;
        }
        int[] mergedArray = new int[nums1.length+ nums2.length];
        for(int j = 0; j < nums1.length; j++){
            nums1[j] = sc.nextInt();
            mergedArray[j] = nums1[j];
        }
        for(int i = 0; i < nums2.length; i++){
            nums2[i] = sc.nextInt();
            mergedArray[nums1.length + i] = nums2[i];
        }
        int middle = mergedArray.length / 2;
        Arrays.sort(mergedArray);
        if (mergedArray.length == 0) {
            return 0.0;
        }
        if (mergedArray.length % 2 == 0) {
            return (mergedArray[middle] + mergedArray[middle - 1]) / 2.0;
        } else {
            return mergedArray[middle];
        }
    }
    public static void main(String[] args){
        int m = 2, n = 2;
        int[] nums1 = new int[m];
        int[] nums2 = new int[n];
        double test = findMedianSortedArrays(nums1,nums2);
        System.out.println(test);
    }
}
