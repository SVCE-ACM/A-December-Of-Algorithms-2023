import java.util.Scanner;
public class dec3 {
    public class december3 {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            System.out.print("Enter Number of buildings : ");
            int size = scanner.nextInt();
            int[] array = new int[size];
            System.out.println("Enter hight of the building:");
    
            for (int i = 0; i < size; i++) {
                System.out.print("Building " + (i + 1) + ": ");
                array[i] = scanner.nextInt();
            }
            int count = 0;
            for (int i = 1; i < size; i++) {
                if (array[i] > array[i - 1]) {
                    count++;
                }
            }
            System.out.println("No of building that can see the Sun rise ! : " + (count + 1));
            scanner.close();
        }
    }
    
}
