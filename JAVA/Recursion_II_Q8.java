package JAVA;

import java.util.HashSet;

public class Recursion_II_Q8 {

    public static void subSequence(String str, int indx, String newString, HashSet<String> set){
        if(indx == str.length()){
            if(set.contains(newString)){
                return ;
            }
            else {
                System.out.println(newString);
                set.add(newString);
                return;
            }
        }

        char currChar = str.charAt(indx);

        //to be
        subSequence(str, indx+1 , newString+currChar , set);
        // not to be
        subSequence(str, indx+1 , newString, set);
    }

    public static void main(String[] args){
        String str = "aaa";
        HashSet<String> set = new HashSet<>();
        subSequence(str, 0 , "" , set);
    }
}
