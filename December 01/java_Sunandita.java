/*  ******* INPUT FORMAT ********

Line 1 contains number of values n
Line  two consists n space separated values

EXAMPLE

 9
 10 20 30 40 50 60 70 80 90 

 */


import java.util.*;
public class java_Sunandita {

    public static void main(String args[]){
        int max=0;
        int sums=0;
        try (Scanner s = new Scanner(System.in)) {
            int n=s.nextInt();
            int arr[]=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=s.nextInt();
            }
            
            for(int i=0;i<n;i++){
                sums+=arr[i];
                if(arr[i]>arr[max]){
                    max=i;
                }
            }
        }
        System.out.println(sums);
        System.out.println(max);
    }
}