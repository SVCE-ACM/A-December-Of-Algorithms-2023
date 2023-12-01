import java.util.Scanner;

public class PurpleBolt {
    public static void main(String[] args) {
        int[] cricket = new int[11];
        int score = 0;
        int best_batsmen = 0;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number of batsmen:");
        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            System.out.print("Enter runs scored by batsmen " + (i + 1) + ":");
            cricket[i] = scanner.nextInt();
            score = score + cricket[i];
        }
        int largest = cricket[0];
        for (int i = 1; i < n; i++) {
            if (cricket[i] > largest) {
                largest = cricket[i];
                best_batsmen = i;
            }
        }
        System.out.println("Total runs scores by the team is " + score + " and the best batsmen is "
                + (best_batsmen + 1) + " .He scored " + largest + " Runs!!");
        scanner.close();
    }
}
