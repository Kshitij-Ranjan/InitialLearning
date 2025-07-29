package JAVA;

public class practice4 {

    public static String longestPalindrome(String s) {
        if (s == null || s.length() < 1) return "";

        String longest = "";
        for (int i = 0; i < s.length(); i++) {
            for (int j = s.length() - 1; j >= i; j--) {
                if (s.charAt(i) == s.charAt(j)) {
                    int start = i;
                    int end = j;
                    boolean isPalindrome = true;
                    while (start < end) {
                        if (s.charAt(start) != s.charAt(end)) {
                            isPalindrome = false;
                            break;
                        }
                        start++;
                        end--;
                    }
                    if (isPalindrome && (j - i + 1) > longest.length()) {
                        longest = s.substring(i, j + 1);
                    }
                }
            }
        }
        return longest;
    }

    public static void main(String[] args) {
        String s = "abbda";
        String test = longestPalindrome(s);
        System.out.println(test);
    }
}
