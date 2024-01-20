import java.util.ArrayList;
import java.util.Scanner;

public class dec6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number of words in the secret msg:");
        int n = scanner.nextInt();
        String[] array = new String[n];
        for (int i = 0; i < n; i++) {
            System.out.println("Enter word no " + (i + 1));
            String v = scanner.next();
            array[i] = v;
        }
        ArrayList<String> finalList = new ArrayList<>();
        finalList.add(array[0]);

        for (int i = 1; i < n; i++) {
            String a = finalList.get(finalList.size() - 1);
            String b = array[i];
            int m = 0;

            for (int x = 0; x < a.length(); x++) {
                if (a.charAt(x) != b.charAt(x)) {
                    m++;
                }
            }

            if (m <= 1) {
                finalList.add(b);
            }
        }

        System.out.println(finalList);
        scanner.close();
    }
}
