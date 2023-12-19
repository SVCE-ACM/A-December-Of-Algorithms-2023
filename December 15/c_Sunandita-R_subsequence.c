#include <stdio.h>
#include <string.h>

int countDistinctSubsequences(char* str) {
    int n = strlen(str);
    int dp[n + 1];
    int last[256];

    memset(last, -1, sizeof(last));
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        dp[i] = 2 * dp[i - 1];

        if (last[str[i - 1]] != -1) {
            dp[i] -= dp[last[str[i - 1]]];
        }

        last[str[i - 1]] = i - 1;
    }

    return dp[n];
}

int main() {
    char input[100];
    
    printf("Enter the input string: ");
    scanf("%s", input);

    int result = countDistinctSubsequences(input);

    printf("Total number of distinct subsequences: %d\n", result);

    return 0;
}
