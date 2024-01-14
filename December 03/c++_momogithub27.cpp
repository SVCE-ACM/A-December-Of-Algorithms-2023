#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxi = 0, a, ans = 0;
    for(int i =0; i<n; i++){
        cin >> a;
        if(maxi < a){
            maxi = a;
            ans++;
        }
    }
    cout << ans;
    return 0;
}

