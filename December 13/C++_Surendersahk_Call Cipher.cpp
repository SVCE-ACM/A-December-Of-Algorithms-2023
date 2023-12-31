#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string encodedNumber;
    std::cout << "Enter the letter-encoded phone number: ";
    std::cin >> encodedNumber;

    std::string decodedNumber = "";

    for (char c : encodedNumber) {
        if (std::isalpha(c)) {
            c = std::tolower(c);
            if (c >= 'a' && c <= 'c') {
                decodedNumber += "2";
            } else if (c >= 'd' && c <= 'f') {
                decodedNumber += "3";
            } else if (c >= 'g' && c <= 'i') {
                decodedNumber += "4";
            } else if (c >= 'j' && c <= 'l') {
                decodedNumber += "5";
            } else if (c >= 'm' && c <= 'o') {
                decodedNumber += "6";
            } else if (c >= 'p' && c <= 's') {
                decodedNumber += "7";
            } else if (c >= 't' && c <= 'v') {
                decodedNumber += "8";
            } else if (c >= 'w' && c <= 'z') {
                decodedNumber += "9";
            }
        } else {
            decodedNumber += c;
        }
    }

    std::cout << "Decoded phone number: " << decodedNumber << std::endl;

    return 0;
}
