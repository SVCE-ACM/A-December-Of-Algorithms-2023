#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, total = 0, a, maxi = 0, pos;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a;
        total += a;
        if(maxi < a){
            pos = i;
            maxi = a;
        }
    }
    cout << total << endl << pos;
    return 0;
}
