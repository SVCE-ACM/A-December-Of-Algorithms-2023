import java.util.Scanner;
public class dec5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the number of stealing attempts :");  
        int n = scanner.nextInt();
        int tot=0,money=0;
        int[] array = new int[n];
        for(int i=0;i<n;i++){
            System.out.println("enter amount stolen in" + (i+1) + "th attempt");
            int v =scanner.nextInt();
            array[i]= v;
            tot = tot+v;
        
        }
        int avg =tot/n;
        for(int i=0;i<n;i++){
            if(array[i]>=avg){
                money= money + array[i];
            }
        }
        System.out.println("the total amount of money stolen by the thieves who stole more than or equal to the average amount stolen by the group="+money);
        scanner.close();
    }  
}
//retry