#include <iostream>
#include <stack>
#include <string>
using namespace std;

int symSum(const string& kp) {
    stack<pair<long long, int>> st;

    int multiplier = 1;
    long long sum = 0;

    for (char ch:kp) {
        if (isdigit(ch)) {
            sum += ch - '0';
        } else if (ch=='X') {
            st.push({sum, multiplier});
            sum = 0;
            multiplier = 1;
        } else if (ch==' ') {
            continue;
        } else {
            multiplier=ch-'0';
        }
    }

    long long sSum = 0;

    while (!st.empty()) {
        auto top = st.top();
        st.pop();
        sSum+= top.first * top.second;
    }
    return sSum;
}

int main() {
    string s = "X1 1 X2 4 X3 4 5";
    cout << "Symbolic Sum: " << symSum(s) << endl;
    return 0;
}
