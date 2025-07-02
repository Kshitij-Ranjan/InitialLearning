package JAVA;

public class Recursion_II_Q7 {

    public static void subSequence(String str, int indx, String newString){
        if(indx == str.length()){
            System.out.println(newString);
            return;
        }

        char currChar = str.charAt(indx);

        //to be
        subSequence(str, indx+1 , newString+currChar);
        // not to be
        subSequence(str, indx+1 , newString);
    }

    public static void main(String[] args){
         String str = "abc";
         subSequence(str, 0 , "");
    }
}
