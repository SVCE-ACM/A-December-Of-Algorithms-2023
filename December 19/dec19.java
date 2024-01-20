import java.util.Scanner;
public class dec19 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter code: ");
        String ciphertext = scanner.nextLine().toUpperCase();
        System.out.print("Enter shift number (0 to 25): ");
        int shift = scanner.nextInt();
        StringBuilder decryptedMessage = new StringBuilder();
        for (char ch : ciphertext.toCharArray()) {
            if (Character.isLetter(ch)) {
                char base = Character.isUpperCase(ch) ? 'A' : 'a';
                decryptedMessage.append((char) ((ch - shift - base + 26) % 26 + base));
            } else {
                decryptedMessage.append(ch);
            }
        }
        System.out.println("Decrypted Message: " + decryptedMessage);
        scanner.close();
    }
}

    

