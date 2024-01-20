import java.util.Scanner;

public class dec9 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the camel case string: ");
        String camelCaseString = scanner.next();

        int wordCount = 1; 
        for (int i = 0; i < camelCaseString.length(); i++) {
            char currentChar = camelCaseString.charAt(i);

          
            if (Character.isUpperCase(currentChar)) {
                wordCount++;
            }
        }
        System.out.println("Number of words: " + wordCount);

        scanner.close();
    }
}