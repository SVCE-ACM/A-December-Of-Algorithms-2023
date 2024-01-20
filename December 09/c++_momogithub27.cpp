#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') ans++;
    }
    cout << ans;
    return 0;
}
