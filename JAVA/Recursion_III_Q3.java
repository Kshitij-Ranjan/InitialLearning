package JAVA;

public class Recursion_III_Q3 {
    public static int tilePlacement(int n , int m){
        if( n == m){
            return 2;
        }
        if(n<m){
            return 1;
        }
        //vertically
        int verticlePlacement = tilePlacement(n-m,m);
        //horizontally
        int horizontalPlacement = tilePlacement(n-1,m);

        return verticlePlacement+horizontalPlacement;
    }
    public static void main(String[] args){
        int n = 4;
        int m = 2;
        int totalMethods = tilePlacement(n,m);
        System.out.println(totalMethods);
    }
}
