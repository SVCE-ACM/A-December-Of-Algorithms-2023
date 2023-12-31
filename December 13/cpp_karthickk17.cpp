#include <iostream>

using namespace std;

string textToNum(string encrypted_string) {
    string decrypted_string = "";
    for (char ch: encrypted_string) {
        if ( isalpha(ch) ) {
            if ( ch <= 'C' )
                decrypted_string += '2';
            else if ( ch <= 'F' )
                decrypted_string += '3';
            else if ( ch <= 'I' )
                decrypted_string += '4';
            else if ( ch <= 'L' )
            decrypted_string += '5';
            else if ( ch <= 'O' )
                decrypted_string += '6';
            else if ( ch <= 'S' )
                decrypted_string += '7';
            else if ( ch <= 'V' )
                decrypted_string += '8';
            else
                decrypted_string += '9';
        }
        else
            decrypted_string += ch;
    }
    return decrypted_string;
}

int main() {

    string encrypted_string;
    cin >> encrypted_string;
    cout << textToNum(encrypted_string);
    return 0;
}
