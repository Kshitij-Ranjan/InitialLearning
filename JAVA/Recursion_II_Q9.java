package JAVA;

public class Recursion_II_Q9 {
     public static String[] keymap = {".", "abc","def" , "ghi", "jkl", "mno", "pqrs"," tu", "vwx","yz" };
     public static void printComb(String str,int indx,String combination){
        if(indx == str.length()) {
            System.out.print(combination);
            return;
        }
         char currChar = str.charAt(indx);
         String mapping = keymap[currChar - '0'];

         for(int i = 0; i < mapping.length(); i++){
             printComb(str, indx +1 ,combination+mapping.charAt(i));
             System.out.println();
         }
     }
    public static void main(String[] args){
        String str = "62";
        printComb(str, 0 , "");
    }
}
