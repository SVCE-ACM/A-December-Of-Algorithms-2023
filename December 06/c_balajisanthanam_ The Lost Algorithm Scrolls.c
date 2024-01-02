#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to check if two words differ by exactly one character
int isOneCharDifference(char *word1, char *word2) {
    int diffCount = 0;
    int len1 = strlen(word1);
    int len2 = strlen(word2);

    if (len1 != len2)
        return 0; // Words must have the same length

    for (int i = 0; i < len1; i++) {
        if (word1[i] != word2[i]) {
            diffCount++;
            if (diffCount > 1)
                return 0; // More than one difference found
        }
    }

    return diffCount == 1; // Return true if exactly one difference is found
}

// Function to find the optimal sequence of words
void findOptimalSequence(char **words, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isOneCharDifference(words[i], words[j]))
                printf("%s -> %s\n", words[i], words[j]);
        }
    }
}

int main() {
    int numWords;
    printf("Enter the number of encoded words: ");
    scanf("%d", &numWords);

    char **encodedWords = (char **)malloc(numWords * sizeof(char *));
    printf("Enter the encoded words:\n");
    for (int i = 0; i < numWords; i++) {
        encodedWords[i] = (char *)malloc(50 * sizeof(char)); // Assuming a maximum word length of 50 characters
        scanf("%s", encodedWords[i]);
    }

    findOptimalSequence(encodedWords, numWords);

    // Free allocated memory
    for (int i = 0; i < numWords; i++) {
        free(encodedWords[i]);
    }
    free(encodedWords);

    return 0;
}
