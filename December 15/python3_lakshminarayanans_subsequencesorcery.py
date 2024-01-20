"""
Module documentation: Subsequence Sorcery

This module defines a function countDistinctSubsequences to count the number of distinct subsequences in a given string.

Usage:
    input_str1 = "ghg"
    output1 = countDistinctSubsequences(input_str1)
    print("Output 1:", output1)

    input_str2 = "ice"
    output2 = countDistinctSubsequences(input_str2)
    print("Output 2:", output2)
"""

def countDistinctSubsequences(s):
    """
    Count the number of distinct subsequences in a given string.

    Parameters:
        s (str): The input string.

    Returns:
        int: The number of distinct subsequences.
    """
    mod = 10 ** 9 + 7
    n = len(s)

    dp = [0] * (n + 1)
    dp[0] = 1

    last_occurrence = {}

    for i in range(1, n + 1):
        dp[i] = (2 * dp[i - 1]) % mod

        if s[i - 1] in last_occurrence:
            dp[i] = (dp[i] - dp[last_occurrence[s[i - 1]] - 1] + mod) % mod

        last_occurrence[s[i - 1]] = i

    return dp[n]

if __name__ == "__main__":
    # Example usage
    input_str1 = "ghg"
    output1 = countDistinctSubsequences(input_str1)
    print("Output 1:", output1)

    input_str2 = "ice"
    output2 = countDistinctSubsequences(input_str2)
    print("Output 2:", output2)
