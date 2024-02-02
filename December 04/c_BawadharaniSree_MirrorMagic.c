#include <stdio.h>
#include <string.h>
int isPalindromic(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}
void findSmallestPalindromicSubstring(char str[]) {
    int n = strlen(str);
    int minLen = n; 
    int minStart = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isPalindromic(str, i, j) && (j - i + 1) < minLen) {
                minLen = j - i + 1;
                minStart = i;
            }
        }
    }
    if (minLen == n) {
        printf("Error\n");
    } else {
        printf("The smallest palindromic substring: ");
        for (int i = minStart; i < minStart + minLen; i++) {
            printf("%c", str[i]);
        }
        printf("\n");
    }
}
int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    findSmallestPalindromicSubstring(str);
    return 0;
}