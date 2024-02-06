#include <iostream>
#include <string>
using namespace std;

string decryptMessage(const string& encrypted, int shift) {
    string decrypted = "";

    for (char ch : encrypted) {
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            decrypted += static_cast<char>((ch - base - shift + 26) % 26 + base);
        } else {
            decrypted += ch; // Keep non-alphabetic characters unchanged
        }
    }

    return decrypted;
}

int main() {
    string encrypted_message = "RQHODQTLATCTQ";
    int shift = 3; // Assuming a Caesar cipher with a shift of 3 (as hinted in the message)

    string decrypted_message = decryptMessage(encrypted_message, shift);

    cout << "Decrypted Message: " << decrypted_message << endl;

    return 0;
}
