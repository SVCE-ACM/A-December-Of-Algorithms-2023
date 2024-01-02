#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORDS 100
#define MAX_LENGTH 20
int isOneLetterDifference(const char *word1, const char *word2) {
    int differences = 0;
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    if (len1 != len2) {
        return 0;
    }
    for (int i = 0; i < len1; i++) {
        if (word1[i] != word2[i]) {
            differences++;
        }
        if (differences > 1) {
            return 0;
        }
    }
    return differences == 1;
}
void findWordChain(char *words[], int n) {
    int foundChain = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }
    printf("\nOutput:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isOneLetterDifference(words[i], words[j])) {
                printf("%s -> %s\n", words[i], words[j]);
                foundChain = 1;
            }
        }
    }
    if (!foundChain) {
        printf("No valid chain.\n");
    }
}
int main() {
    char *words[MAX_WORDS];
    int n;
    printf("Enter the number of words: ");
    scanf("%d", &n);
    if (n > MAX_WORDS || n <= 0) {
        printf("Invalid number of words. Exiting...\n");
        return 1;
    }
    for (int i = 0; i < MAX_WORDS; i++) {
        words[i] = (char *)malloc(MAX_LENGTH * sizeof(char));
    }
    findWordChain(words, n);
    for (int i = 0; i < MAX_WORDS; i++) {
        free(words[i]);
    }
    return 0;
}