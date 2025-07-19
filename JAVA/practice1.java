package JAVA;

public class practice1 {
    public static boolean[] map = new boolean[26];
//    public static void longestSubstring(String str, int indx, int count){
//        if(indx == str.length()){
//            System.out.println(count);
//            return;
//        }
//        int last = 0;
//        String test = "";
//        char currChar = str.charAt(indx);
//        if(map[currChar - 'a']){
//            test = str.substring(last, indx)
//            last = indx;
//            longestSubstring(str, indx+1, test.length());
//        } else {
//            map[currChar - 'a'] = true;
//            longestSubstring(str, indx+1, count+1);
//        }
//    }

    public static void main(String[] args){
        String str = "pwwkelw";

        int last = 0;
        String test = "";
        String newString = "";
        for(int indx = 0; indx < str.length();indx++){
            char currChar = str.charAt(indx);
            if(map[currChar - 'a']){
                test = str.substring(last, indx);
                System.out.println(indx+".");
                last = indx;
                break;
            }else{
                newString += currChar;
                map[currChar - 'a'] = true;
            }
        }
        System.out.println(test.length());
        System.out.println(test);
    }
}
