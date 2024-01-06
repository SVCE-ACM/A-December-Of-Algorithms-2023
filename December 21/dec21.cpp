#include <bits/stdc++.h>
using namespace std;

string decryptMessage(string& code, int shift) 
{
    string decryptedMessage = "";

    for (char ch : code) 
    {
        if (isalpha(ch)) 
        {
            char base = islower(ch) ? 'a' : 'A';
            
            // decryptedMessage += static_cast<char>((ch - base - shift + 26) % 26 + base);
            decryptedMessage += 'A' + ((ch - base - shift + 26) % 26);
        } 
        
        else 
        {
            decryptedMessage += ch;
        }
    }

    return decryptedMessage;
}
int main() 
{
    string code;
    cout << "Enter code: ";
    cin >> code;

    cout << "The Bomb location is: ";
    for (int shift = 0; shift < 26; shift++) 
    {
        string decryptedMessage = decryptMessage(code, shift);
        cout << decryptedMessage << " - Shift " << shift <<endl;
    }
    return 0;
}
