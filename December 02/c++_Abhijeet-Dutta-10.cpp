#include <bits/stdc++.h>
using namespace std;

vector<int> v;
unordered_map<int, int> filter(string s){
    int temp = 0;
    unordered_map<int, int> mp;
    for(int i = 1; i<s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            temp = (temp*10)+int(s[i] - '0');
        } else {
            mp[temp]++;
            if(!count(v.begin(), v.end(), temp)) v.push_back(temp);
            temp = 0;
        }
    }
    return mp;
}

int main()
{
    string s;
    cin >> s;
    unordered_map<int, int> mp = filter(s);
    cout << '[';
    for(int i = 0; i < v.size(); i++){
        if(i == v.size()-1){
            cout << mp[v[i]];
            break;
        }
        cout << mp[v[i]] << ',';
    }
    cout <<  "]";
    return 0;
}
