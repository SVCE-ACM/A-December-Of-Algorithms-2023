import java.util.Scanner;
public class december2 {
        public static void main(String[] args) {
         System.out.println("Enter number of Purchase to analyse : ");
         Scanner scanner = new Scanner(System.in);
         int size = scanner.nextInt();
         int[] productId = new int[size];
         System.out.println("Enter product ID ");
         for(int i=0;i<size;i++){
            System.out.println("No " + (i+1) + ":");
            productId[i] = scanner.nextInt();
         }
         int[] frequencyArray = new int[size];
            boolean[] visited = new boolean[size];
            for (int i = 0; i < size; i++) {
                if (!visited[i]) {
                    int count = 1;
                    for (int j = i + 1; j < size; j++) {
                        if (productId[i] == productId[j]) {
                            visited[j] = true;
                            count++;
                        }
                    }
                    frequencyArray[i] = count;
                }
            }
            System.out.println("Frequency of each element:");
            for (int i = 0; i < size; i++) {
                if (!visited[i]) {
                    System.out.println(productId[i] + ": " + frequencyArray[i] + " times");
                }
            }
            scanner.close();
        } 
    }
