#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for(int i = 0; i<n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<string> ans;
    ans.push_back(v[0]);
    for(int i = 1; i<n; i++){
        int s1 = v[i].size();
        int s2 = v[i-1].size();
        if(abs(s1-s2) > 1) break;  
        int temp = 0;
        if(abs(s1-s2) == 1) temp++;
        for(int j = 0; j<min(v[i].size(), v[i-1].size()); j++){
            if(v[i][j] != v[i-1][j]) temp++;
        }
        if(temp <= 1) ans.push_back(v[i]);
        else break;
    }
    if(ans.size() == 1) cout << "No valid chain.";
    else{
        for(auto i: ans){
            cout << i << " ";
        }
    }
    return 0;
}
