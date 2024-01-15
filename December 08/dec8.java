import java.util.Scanner;
public class dec8 {
        public static void main(String[] args) {
            
            System.out.print("Enter number of Rows/column for the square matrix:");
            Scanner scanner= new Scanner(System.in);
            int n= scanner.nextInt();
            int[][] magicSquare = findPath(n);

            displayMagicSquare(magicSquare);
            scanner.close();
        }
        

        
        private static int[][] findPath(int n) {
            int[][] magicSquare = new int[n][n];
            int i = n / 2;
            int j = n - 1;
    
            for (int num = 1; num <= n * n;) {
                if (i == -1 && j == n) {
                    j = n - 2;
                    i = 0;
                } else {
                    if (j == n) {
                        j = 0;
                    }
                    if (i < 0) {
                        i = n - 1;
                    }
                }
                if (magicSquare[i][j] != 0) {
                    j -= 2;
                    i++;
                    continue;
                } else {

                    magicSquare[i][j] = num++;
                }
    
                j++;
                i--;
            }
            return magicSquare;
        }



        private static void displayMagicSquare(int[][] magicSquare) {
            System.out.println("Magic Square:");
    
            for (int i = 0; i < magicSquare.length; i++) {
                for (int j = 0; j < magicSquare[i].length; j++) {
                    System.out.print(magicSquare[i][j] + "\t");
                }
                System.out.println();
            }
            
        }
    
      
    
}
