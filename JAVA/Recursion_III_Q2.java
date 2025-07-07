package JAVA;

public class Recursion_III_Q2 {
    public static int coutPaths(int i , int j , int n , int m){
        if(i == n || j == m){
            return 0;
        }
        if(i == n-1 && j == m-1){
            return 1;
        }
        //moving downwards
        int downPaths = coutPaths(i+1, j , n , m);

        // moving right
        int rightPaths = coutPaths(i,j+1,n,m);

        return downPaths+rightPaths;
    }
    public static void main(String[] args){
        int n = 3;
        int m = 4;
        int paths = coutPaths(0,0,n,m);
        System.out.println(paths);
    }
}
