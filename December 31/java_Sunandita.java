/*
 *     In The first test case the second line of the output seems to differ....
 */

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class java_Sunandita {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value of N (between 1 and 8): ");
        int N = scanner.nextInt();
        if (N < 1 || N > 8) {
            System.out.println("Invalid input. N should be between 1 and 8.");
            scanner.close();
            return;
        }
        List<List<String>> solutions = solveNQueens(N);
        printSolutions(solutions);
        scanner.close();
    }

    private static List<List<String>> solveNQueens(int N) {
        List<List<String>> solutions = new ArrayList<>();
        solveNQueensHelper(N, 0, new int[N], solutions);
        return solutions;
    }

    private static void solveNQueensHelper(int N, int row, int[] placement, List<List<String>> solutions) {
        if (row == N) {
            solutions.add(generateSolution(placement));
            return;
        }

        for (int col = 0; col < N; col++) {
            if (isValidPlacement(placement, row, col)) {
                placement[row] = col;
                solveNQueensHelper(N, row + 1, placement, solutions);
            }
        }
    }
    private static boolean isValidPlacement(int[] placement, int row, int col) {
        for (int i = 0; i < row; i++) {
            if (placement[i] == col || Math.abs(placement[i] - col) == Math.abs(i - row)) {
                return false;
            }
        }
        return true;
    }
    private static List<String> generateSolution(int[] placement) {
        List<String> solution = new ArrayList<>();
        for (int i = 0; i < placement.length; i++) {
            solution.add("(" + (i + 1) + ", " + (placement[i] + 1) + ")");
        }
        return solution;
    }
    private static void printSolutions(List<List<String>> solutions) {
        for (List<String> solution : solutions) {
            System.out.println(String.join(" ", solution));
        }
    }
}
