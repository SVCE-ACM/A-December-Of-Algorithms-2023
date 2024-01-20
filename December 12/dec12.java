import java.util.Arrays;
import java.util.Scanner;  
public class dec12 {
        public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the content of Box1 seperated by coma: ");
        String[] box1 = scanner.nextLine().split(", ");
        System.out.print("Enter the content of Box2 : ");
        String[] box2 = scanner.nextLine().split(", ");
        System.out.print("Enter the content of Box3 : ");
        String[] box3 = scanner.nextLine().split(", ");
        String result = findGoldBox(box1, box2, box3);

        System.out.println(result);

        scanner.close();
    }
    private static String findGoldBox(String[] box1, String[] box2, String[] box3) {
        String[] sortedBoxes = {box1[2], box2[2], box3[2]}; 

        Arrays.sort(sortedBoxes);

        if (sortedBoxes[1].equals("Gold")) {
            return "The box containing the Gold is Box2";
        } else if (sortedBoxes[0].equals("Gold")) {
            return "The box containing the Gold is Box1";
        } else {
            return "The box containing the Gold is Box3";
        }
    }
}

    
