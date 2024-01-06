/*   
        INPUT FORMAT : A spaceless string with combinations of capital letters and numbers without quotes

        **********************INPUT FORMAT EXAMPLE ******************

        653-TRY-THIS

*/

#include <stdio.h>
#include <string.h>

void textToNum(char *input) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            if (input[i] >= 'A' && input[i] <= 'C') {
                input[i] = '2';
            } else if (input[i] >= 'D' && input[i] <= 'F') {
                input[i] = '3';
            } else if (input[i] >= 'G' && input[i] <= 'I') {
                input[i] = '4';
            } else if (input[i] >= 'J' && input[i] <= 'L') {
                input[i] = '5';
            } else if (input[i] >= 'M' && input[i] <= 'O') {
                input[i] = '6';
            } else if (input[i] >= 'P' && input[i] <= 'S') {
                input[i] = '7';
            } else if (input[i] >= 'T' && input[i] <= 'V') {
                input[i] = '8';
            } else if (input[i] >= 'W' && input[i] <= 'Z') {
                input[i] = '9';
            }
        }
    }
}

int main() {
    char input[] = "";
    scanf("%s",input);
    textToNum(input);
    printf("%s\n", input);

    return 0;
}

