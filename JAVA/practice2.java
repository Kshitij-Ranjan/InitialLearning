package JAVA;

public class practice2 {
    //public static boolean map[] = new boolean[26];
    public static boolean isAnagram(String s, String t) {
        if (s.length() == t.length()) {
            int count = 0;
            StringBuilder map = new StringBuilder(s.length());
            map = new StringBuilder(s);
            //char[] map = new char[s.length()];
            for (int j = 0; j < t.length(); j++) {
                int index = map.indexOf(String.valueOf(t.charAt(j)));
                if (index != -1) {
                    map.deleteCharAt(index);
                    count++;
                }
            }
            return count == s.length();
        }
        return false;
        }

    public static void main(String[] args){
        String s = "anagram";
        String t = "nagaram";
        boolean test = isAnagram(s,t);
        System.out.println(test);
    }
}
