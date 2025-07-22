package JAVA;

public class MergeSort {

    public static void conquer(int[] arr, int startingIndex, int mid, int endingIndex ){
        int[] merged = new int[endingIndex - startingIndex +1];

        int index1 = startingIndex;
        int index2 = mid+1;
        int mergedIndex = 0;
        while (index1 <= mid && index2 <= endingIndex){
            if(arr[index1] <= arr[index2]){
                merged[mergedIndex++] = arr[index1++]; // this is same thing as merged[mergedIndex] = arr[index1]; then doing mergedIndex++; and index1++; its mixed
            }
            else {
                merged[mergedIndex++] = arr[index2++];
            }
        }
        while(index1 <= mid){
            merged[mergedIndex++] = arr[index1++];
        }

        while(index2 <= endingIndex){
            merged[mergedIndex++] = arr[index2++];
        }
        for(int i = 0, j= startingIndex; i<merged.length; i++ , j++){
            arr[j] = merged[i];
        }
    }

    public static void divide(int[] arr, int startingIndex, int endingIndex){
        int mid = startingIndex + (endingIndex - startingIndex)/2; // we don't use (si + ei)/2 cuz if they both are large numbers they can go out of integer data type limit
        if(startingIndex >= endingIndex){ // si > ei is so cuz of invalid subarray due to miscalculation, avoids infinite recursion or ArrayIndexOutOfBounds
            return;
        }
        divide(arr,startingIndex,mid);
        divide(arr, mid+1,endingIndex);
        conquer(arr,startingIndex,mid,endingIndex);
    }

    public static void main(String[] args) {
        int[] arr = {6,3,9,5,2,8};
        int n = arr.length;
        divide(arr, 0 ,n-1);
        for(int i = 0; i < arr.length ; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
