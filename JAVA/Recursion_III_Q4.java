package JAVA;

public class Recursion_III_Q4 {
    public static int inviteGuest(int n){
        if(n <= 1){
            return 1;
        }
        //single
        int option1 = inviteGuest(n-1);

        // pairs
        int option2 = (n-1)*inviteGuest(n-2);

        return option1 + option2;
    }
    public static void main(String[] args){
        int n = 4;
        int totalMethods = inviteGuest(n);
        System.out.println(totalMethods);
    }
}
