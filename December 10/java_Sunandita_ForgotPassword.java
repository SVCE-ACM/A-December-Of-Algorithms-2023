import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.Scanner;

public class java_Sunandita_ForgotPassword {
    public static void main(String[] args) {

        String[] empname = {"Shivnash Kumar", "Ragul gupta", "Srikanth Kidambi"};

        try (Scanner s = new Scanner(System.in)) {
            String queryString = s.nextLine();
            Pattern pattern = Pattern.compile("substring\\([^,]+,(\\d+),(\\d+)\\)");
            Matcher matcher = pattern.matcher(queryString);

            // Check if a match is found
            if (matcher.find()) {
                int firstNumber = Integer.parseInt(matcher.group(1));
                int secondNumber = Integer.parseInt(matcher.group(2));

                // Iterate through the array of employee names
                for (int i = 0; i < empname.length; i++) {
                    int endIndex = Math.min(empname[i].length(), firstNumber - 1 + secondNumber);
                    System.out.println(empname[i].substring(firstNumber - 1, endIndex));
                }
            } else {
                System.out.println("No match found.");
            }
        } catch (NumberFormatException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
