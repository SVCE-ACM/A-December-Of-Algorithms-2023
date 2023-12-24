/*
 *  INPUT FORMAT EXAMPLE
 * 
 * 2
 * 4 3
 * 5 4
 * 
 */

import java.util.Scanner;

public class java_Sunandita {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int n = scanner.nextInt();
            int[][] dominoes = new int[n][2];

            for (int i = 0; i < n; i++) {
                dominoes[i][0] = scanner.nextInt();
                dominoes[i][1] = scanner.nextInt();
            }

            int result = minRotationTime(n, dominoes);
            System.out.println(result);
        }
    }

    private static int minRotationTime(int n, int[][] dominoes) {
        int upperSum = 0, lowerSum = 0;

        for (int i = 0; i < n; i++) {
            upperSum += dominoes[i][0];
            lowerSum += dominoes[i][1];
        }

        if (upperSum % 2 == 0 && lowerSum % 2 == 0) {
            return 0;
        }

        for (int i = 0; i < n; i++) {
            if ((upperSum + dominoes[i][1] - dominoes[i][0]) % 2 == 0 &&
                    (lowerSum + dominoes[i][0] - dominoes[i][1]) % 2 == 0) {
                return 1;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((upperSum + dominoes[i][1] - dominoes[i][0] + dominoes[j][1] - dominoes[j][0]) % 2 == 0 &&
                        (lowerSum + dominoes[i][0] - dominoes[i][1] + dominoes[j][0] - dominoes[j][1]) % 2 == 0) {
                    return 2;
                }
            }
        }

        return -1;
    }
}
