#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

void extractPalindromes(const std::string& input) {
    std::cout << "Palindromic substrings in '" << input << "':\n";

    for (size_t i = 0; i < input.length(); ++i) {
        for (size_t j = i + 1; j <= input.length(); ++j) {
            std::string substring = input.substr(i, j - i);
            if (isPalindrome(substring) && substring.length() > 1) {
                std::cout << substring << std::endl;
            }
        }
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    extractPalindromes(input);

    return 0;
}
