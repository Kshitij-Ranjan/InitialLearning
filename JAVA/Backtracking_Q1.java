package JAVA;

public class Backtracking_Q1 {
    public static void newString(String str,int i, String newStr,String perm, int idx){
        if(i == str.length()){
            return;
        }
        char currChar = str.charAt(i);
        newStr = str.substring(0, i) + str.substring(i + 1);
        printPermutation(newStr, perm+currChar,idx+1);
        newString(str,i+1,newStr, perm,idx);
    }
    public static void printPermutation(String str, String perm, int idx) {
        if (str.isEmpty()) {
            System.out.println(perm);
            return;
        }
        newString(str,0,"",perm,idx);
//        for (int i = 0; i < str.length(); i++) {
//            char currChar = str.charAt(i);
//            String newStr = str.substring(0, i) + str.substring(i + 1);
//            printPermutation(newStr, perm + currChar, idx + 1);
//        }
    }

    public static void main(String args[]) {
        String str = "ABC";
        printPermutation(str, "", 0);
    }
}
