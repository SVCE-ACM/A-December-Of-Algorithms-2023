public class dec29 {
        public static void main(String[] args) {
            char[] walk = {'n', 's', 'n', 's', 'n', 's', 'n', 's', 'n', 's'};
            boolean result = isValidWalk(walk);
            System.out.println(result ? "TRUE" : "FALSE");
        }
        public static boolean isValidWalk(char[] walk) {
            if (walk.length != 10) {
                return false; 
            }
            int northSouthSteps = 0;
            int eastWestSteps = 0;
            for (char direction : walk) {
                switch (direction) {
                    case 'n':
                        northSouthSteps++;
                        break;
                    case 's':
                        northSouthSteps--;
                        break;
                    case 'e':
                        eastWestSteps++;
                        break;
                    case 'w':
                        eastWestSteps--;
                        break;
                    default:
                        return false;
                }
            }
            return northSouthSteps == 0 && eastWestSteps == 0;
        }
    }
