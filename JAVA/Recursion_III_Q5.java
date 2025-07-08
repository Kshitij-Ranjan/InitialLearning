package JAVA;

import java.util.*;

public class Recursion_III_Q5 {
    public static void printSubset(ArrayList<Integer> subset){
        for(int i = 0;i < subset.size() ; i++){
            System.out.print(subset.get(i)+" ");
        }
        System.out.println();
    }
    public static void findSubset(int n, ArrayList<Integer> subset){
        if(n == 0){
            printSubset(subset);
            return;
        }
        //will be added
        subset.add(n);
        findSubset(n-1,subset);

        //will not be added
        subset.removeLast(); // will remove the last element
        findSubset(n-1, subset);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String m = sc.next();
        int n = 3;
        ArrayList<Integer> subset = new ArrayList<>();
        findSubset(n,subset);
    }
}
