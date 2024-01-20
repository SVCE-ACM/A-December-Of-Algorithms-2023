import java.util.Scanner;
public class dec7 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner (System.in);
        System.out.print("Enter the width of the rectangle: ");
        double width = scanner.nextDouble();
        System.out.print("Enter the height of the rectangle: ");
        double height = scanner.nextDouble(); 
        System.out.print("Enter the radius of the circle: ");
        double radius = scanner.nextDouble();
 
        boolean canFit = isRectangleInCircle(width, height, radius);
        if (canFit) {
            System.out.println("The rectangle can fit inside the circle.");
        } else {
            System.out.println("The rectangle cannot fit inside the circle.");
        }

        scanner.close();
    }

    private static boolean isRectangleInCircle(double width, double height, double radius) {
       double diagonal = Math.sqrt(width * width + height * height);
        return diagonal <= (2 * radius);
    }
}

    