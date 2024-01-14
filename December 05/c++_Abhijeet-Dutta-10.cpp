#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans = 0, n, total = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
        total += a;
    }
    int avg = total/n;
    for(auto i : v){
        if(i >= avg) ans += i;
    }
    cout << ans;
    return 0;
}
