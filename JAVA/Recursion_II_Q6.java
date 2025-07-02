package JAVA;

public class Recursion_II_Q6 {
    public static boolean[] map = new boolean[26];
    public static void removeDuplicates(String str, int indx, String newString){
        if(indx == str.length()){
            System.out.println(newString);
            return;
        }
        char currChar = str.charAt(indx);
        if(map[currChar - 'a']){
            removeDuplicates(str, indx+1, newString);
        } else {
            newString += currChar;
            map[currChar - 'a'] = true;
            removeDuplicates(str, indx+1, newString);
        }
    }

    public static void main(String[] args){
        String str = "abbcdc";
        removeDuplicates(str, 0 ,"");
    }
}
