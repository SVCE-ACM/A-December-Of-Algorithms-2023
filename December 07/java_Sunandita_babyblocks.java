import java.util.Scanner;

public class java_Sunandita_babyblocks {

    public static void main(String args[]){
            int height,width,rad;
            try (Scanner s = new Scanner(System.in)) {
                System.out.println("rectangleInCircle(8, 6, 5)");
                block(8,6,5);
                width=s.nextInt();
                height=s.nextInt();
                rad=s.nextInt();
                block(width, height, rad);
            }

    }
    protected static void block(int wt,int ht,int r){
        double hyp=Math.sqrt((ht*ht)+(wt*wt));
        if( hyp>2*r){
            System.out.println("false");
        }
        else
        System.out.println("true");
    }

}