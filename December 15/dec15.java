import java.util.Arrays;
import java.util.Scanner;
public class dec15 { 
        public static void main(String[] args) {
            Scanner scanner= new Scanner(System.in);
            System.out.println("Enter Input string");
            String input = scanner.nextLine();
            int n = input.length();
            int[] dp = new int[n + 1];
            dp[0] = 1;
            int[] lastOccurrence = new int[256];
            Arrays.fill(lastOccurrence, -1);
    
            for (int i = 1; i <= n; i++) {
                dp[i] = 2 * dp[i - 1];
    
                char currentChar = input.charAt(i - 1);
    
                if (lastOccurrence[currentChar] != -1) {
                    dp[i] -= dp[lastOccurrence[currentChar] - 1];
                }
    
                lastOccurrence[currentChar] = i;
                scanner.close();
            }
            System.out.println("Number of distinct subsequences: " + dp[n]);
        }
    }
