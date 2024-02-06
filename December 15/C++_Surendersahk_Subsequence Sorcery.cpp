#include <iostream>
#include <vector>
#include <unordered_map>

int countDistinctSubsequences(const std::string& s) {
    int mod = 1e9 + 7; // Modulo value for preventing integer overflow
    int n = s.length();

    std::vector<long long> dp(n + 1, 0); // Dynamic programming array
    std::unordered_map<char, int> last; // Store the last occurrence index of each character

    dp[0] = 1; // Empty string has one subsequence
    for (int i = 1; i <= n; ++i) {
        dp[i] = (2 * dp[i - 1]) % mod; // Double the count considering the addition of the new character
        
        // If the current character has occurred before, reduce the count by the subsequence count ending at the last occurrence of this character
        if (last.find(s[i - 1]) != last.end()) {
            dp[i] = (dp[i] - dp[last[s[i - 1]] - 1] + mod) % mod;
        }
        
        last[s[i - 1]] = i; // Update the last occurrence index of the current character
    }

    return static_cast<int>(dp[n] - 1); // Exclude the count of the empty string
}

int main() {
    std::string crypticString;
    std::cout << "Enter the cryptic string: ";
    std::cin >> crypticString;

    int distinctSubsequences = countDistinctSubsequences(crypticString);
    std::cout << "Number of distinct subsequences: " << distinctSubsequences << std::endl;

    return 0;
}
