#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char temp = s[0];
    string ans = "";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i = 1; i< s.size(); i++){
        if(s[i] == temp){
            cout << s[i] << s[i];
            exit(0);
        }
        temp = s[i];
    }
    for(int i=1; i<s.size()-1; i++){
        if(s[i-1] == s[i+1]){
            cout << s[i-1] << s[i] << s[i-1];
            exit(0);
        }
    }
    cout << "Error";
    return 0;
}

