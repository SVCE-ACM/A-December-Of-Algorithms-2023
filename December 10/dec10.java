public class dec10 {
    public static void main(String[] args) {
  
        String[] empData = {"100 Shivnash Kumar", "110 Ragul Gupta"};

        for (String empRecord : empData) {
            String empnameSubstring = getEmpnameSubstring(empRecord);
            System.out.println(empnameSubstring);
        }
    }
    private static String getEmpnameSubstring(String empRecord) {

        int empnameStartIndex = empRecord.indexOf(" ") + 1;
        return empRecord.substring(empnameStartIndex);
    }
}
