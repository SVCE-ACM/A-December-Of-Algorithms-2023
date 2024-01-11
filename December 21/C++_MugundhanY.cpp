#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cout << "Enter the shift:";
    cin >> n;
    for(int i = 0; i<s.size(); i++){
        s[i] = (((s[i] - 'A')+26-n)%26)+'A';
    }
    cout << s;
    return 0;
}
