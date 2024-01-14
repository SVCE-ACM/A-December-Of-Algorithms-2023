#include <bits/stdc++.h>
using namespace std;

bool walk(vector<char> v){
    int n = 0, s = 0, w = 0, e = 0;
    for(auto c : v){
        if(c == 'n') n++;
        else if(c == 'w') w++;
        else if(c == 's') s++;
        else if(c == 'e') e++;
        else return false;
    }
    if(v.size() == 10 && n == s && w == e) return true;
    return false;
}

int main() {
    int n;
    cout << "Enter the no. of directions: ";
    cin >> n;
    vector<char> v;
    cout << "Enter the directions: ";
    for(int i = 0; i<n; i++){
        char a;
        cin >> a;
        v.push_back(a);
    }
    if(walk(v)) cout << "TRUE";
    else cout << "FALSE";
    return 0;
}
