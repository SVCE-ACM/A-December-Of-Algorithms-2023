import java.util.Scanner;
public class dec4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a word: ");
        String word = scanner.nextLine();
        String smallestPalindrome = findSmallestPalindrome(word);
        System.out.println("Smallest palindrome: " + smallestPalindrome);
        scanner.close();
    }
    private static String findSmallestPalindrome(String word) {
        int length = word.length();

        for (int i = 0; i < length; i++) {
            for (int j = i + 1; j <= length; j++) {
                String substring = word.substring(i, j);
                if (isPalindrome(substring)) {
                    return substring;
                }
            }
        }

        return "No palindrome found";
    }

    private static boolean isPalindrome(String str) {
        str = str.replaceAll("\\s", "").toLowerCase();
        return str.equals(new StringBuilder(str).reverse().toString());
    }
}

    
