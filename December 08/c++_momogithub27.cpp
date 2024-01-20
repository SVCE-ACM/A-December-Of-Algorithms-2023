#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<vector<int>> square(n, vector<int>(n, -1));
  int x = (n / 2), y = n - 1;
  for(int i=1; i<=n*n; i++) {
    square[x][y] = i;
    if(i % n == 0) y--;
    else {
      x--; 
      y++;
    }
    x += n; 
    x %= n;
    y += n;
    y %= n;
  }
  for(auto i : square) {
    for(auto j : i) {
      cout<< j << " ";
    }
    cout<< endl;
  }
  return 0;
}

