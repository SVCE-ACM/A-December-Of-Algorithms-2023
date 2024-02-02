#include <stdio.h>
int countWordsInCamelCase(char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            count++;
        }
    }
    return count;
}
int main() {
    char s[100000];
    printf("Enter the camel case string: ");
    scanf("%s", s);
    int result = countWordsInCamelCase(s);
    printf("Output: %d\n", result);
    return 0;
}