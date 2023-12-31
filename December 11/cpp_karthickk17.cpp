#include <bits/stdc++.h>

using namespace std;

void add_and_convert(int num1, int num2) {
    int sum = num1 + num2;
    string ans = "";
    while (sum > 0) {
        if (sum & 1) //In the bit representation, if the bit is set as 1, the string is appended with 1
            ans += "1";
        else
            ans += "0";
        sum >>= 1;
    }
    //As the bits are checked from left to right, we have to reverse finally to display in properly.
    reverse(ans.begin(), ans.end());
    cout<<ans;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    add_and_convert(num1, num2);
    return 0;
}
