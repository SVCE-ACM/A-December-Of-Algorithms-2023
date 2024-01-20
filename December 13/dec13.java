 import java.util.Scanner;
public class dec13 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the letter-encoded phone number: ");
        String encodedPhoneNumber = scanner.nextLine().toUpperCase();
        String numericalForm = decodePhoneNumber(encodedPhoneNumber);
        System.out.println("Numerical form: " + numericalForm);
        scanner.close();
    }
    private static String decodePhoneNumber(String encodedPhoneNumber) {
        StringBuilder numericalForm = new StringBuilder();

        for (char letter : encodedPhoneNumber.toCharArray()) {
            int number = getNumberForLetter(letter);
            if (number != -1) {
                numericalForm.append(number);
            }
        }
        return numericalForm.toString();
    }
    private static int getNumberForLetter(char letter) {
        switch (letter) {
            case 'A':
            case 'B':
            case 'C':
                return 2;
            case 'D':
            case 'E':
            case 'F':
                return 3;
            case 'G':
            case 'H':
            case 'I':
                return 4;
            case 'J':
            case 'K':
            case 'L':
                return 5;
            case 'M':
            case 'N':
            case 'O':
                return 6;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                return 7;
            case 'T':
            case 'U':
            case 'V':
                return 8;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                return 9;
            default:
                return -1;
        }
    }
}


