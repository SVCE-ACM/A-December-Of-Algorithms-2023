import java.util.Scanner;
public class java_Sunandita_Camelcase {
   
        public static void main(String[] args) {
            Scanner s=new Scanner(System.in);
            String camelCaseString =s.nextLine() ;
            int wordCount = countWordsInCamelCase(camelCaseString);
            System.out.println(wordCount);
        }
        private static int countWordsInCamelCase(String s) {
       
            if (s == null || s.isEmpty()) {
                return 0;
            }
            int wordCount = 1;
            for (int i=1;i<s.length();i++) {
                if (Character.isUpperCase(s.charAt(i))){
                    wordCount++;
                }
            }
            return wordCount;
    
        }}
