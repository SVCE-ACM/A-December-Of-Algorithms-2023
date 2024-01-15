import java.util.Scanner;
public class dec11 {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            System.out.print("Enter 2 Numbers : ");
            int num1 = scanner.nextInt();
            int num2 = scanner.nextInt();
            int sum = num1+num2;
            System.out.println("Sum in binary: " + Integer.toBinaryString(sum));
            scanner.close();
        }
    }

