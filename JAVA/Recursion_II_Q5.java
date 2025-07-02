package JAVA;

public class Recursion_II_Q5 {
    static int count = 0;

    public static void xInLast(StringBuilder str, char ch, int indx){
        if(indx == str.length()) {
            // Add all counted 'x' at the end
            for (int i = 0; i < count; i++) {
                str.append(ch);
            }
            return;
        }

        if(str.charAt(indx) == ch){
            str.deleteCharAt(indx);
            count++;
            xInLast(str, ch, indx); // Don't increment because string shifted left
        } else {
            xInLast(str, ch, indx + 1);
        }
    }

    public static void main(String[] args){
        StringBuilder str = new StringBuilder("xbx");
        xInLast(str, 'x', 0);
        System.out.println(str); // abcdxxx
    }
}