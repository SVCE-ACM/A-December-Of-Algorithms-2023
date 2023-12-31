#include <iostream>

using namespace std;

int main() {
    // The second test case is incorrect. For the plain text to be MADRASHIGHCOURT, the cipher text must be IWZNWODECDYKQNP
    // string str = "RQHODQTLATCTQ";
    string str = "IWZNWODECDYKQNP";
    int key = 22;
    // cin >> str;
    for (int i = 0; i < str.length(); i++)
    {      
        int t = str[i] - 'A';
        t = (t - key)  % 26;
        if (t < 0)
        {
            t += 26;
        }
        char ch = t + 'A';
        str[i] = ch;
    }
    cout << str << endl;
    return 0;
}