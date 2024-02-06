#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans=1;
    vector<int> v(26, 0);  
    for(char c:s){
        ans=ans*2 - v[c-'a'];  
        v[c-'a']++;              
    }
    cout << ans;
    return 0;
}
