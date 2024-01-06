/*
 *      The Test case-2  output given in the question is wrong. There is no tour possible.
 *      In the given program if no tour is possible the output is 0
 * 
 *      ********    INPUT FORMAT    *********
 * 
 *      Three lines of input.
 *      Line 1 is number of petrol stations N ( Enter an integer )
 *      Line 2 has N space seperated integers for number of litres of petrol 
 *      Line 3 has N space seperated integers for  distance.
 * 
 *      ******  INPUT EXAMPLE ******
 *      
 *      4
 *      4 6 7 4
 *      6 5 3 5
 * 
 */

import java.util.Scanner;

class PetrolPump {
    int petrol;
    int distance;

    public PetrolPump(int petrol, int distance) {
        this.petrol = petrol;
        this.distance = distance;
    }
}

public class java_Sunandita {
    static int findStartingPoint(PetrolPump[] petrolPumps) {
        int n = petrolPumps.length;
        int start = 0, totalPetrol = 0, currentPetrol = 0;

        for (int i = 0; i < n; i++) {
            totalPetrol += petrolPumps[i].petrol - petrolPumps[i].distance;
            currentPetrol += petrolPumps[i].petrol - petrolPumps[i].distance;

            if (currentPetrol < 0) {
                start = i + 1;
                currentPetrol = 0;
            }
        }
        return (totalPetrol >= 0) ? start % n : -1;
    }

    public static void main(String[] args) {
        try (Scanner s = new Scanner(System.in)) {
            // Example 1
            System.out.print("N = ");
            int n1=s.nextInt();
            int[] petrol1 = new int[n1];
            int[] distance1 = new int[n1];
            PetrolPump[] petrolPumps1 = new PetrolPump[n1];
            System.out.print("Petrol = ");
            for(int i=0;i<n1;i++){
                petrol1[i]=s.nextInt();
            }
            System.out.print("Distance = ");
            for(int i=0;i<n1;i++){
                distance1[i]=s.nextInt();
            }
            for (int i = 0; i < n1; i++) {
                petrolPumps1[i] = new PetrolPump(petrol1[i], distance1[i]);
            }

            System.out.println(findStartingPoint(petrolPumps1)+1);
        }
}}
