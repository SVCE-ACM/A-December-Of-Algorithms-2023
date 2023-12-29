#include <iostream>
#include <stack>
#include <string>
using namespace std;

int symbolicSum(const string& sequence) {
    stack<pair<long long, int>> st;

    int mul = 1;
    long long sum = 0;

    for (char ch : sequence) {
        if (isdigit(ch)) {
            sum += ch - '0';
        } else if (ch == 'X') {
            st.push({sum, mul});
            sum = 0;
            mul = 1;
        } else if (ch == ' ') {
            continue; 
        } else { 
            mul = ch - '0'; 
        }
    }

    long long symbolicSum = 0;

    while (!st.empty()) {
        auto top = st.top();
        st.pop();

        symbolicSum += top.first * top.second; 
    }

    return symbolicSum;
}

int main() {
    string s_seq = "X5 2 X3 7 X2 5 6";

    int r = symbolicSum(s_seq);
    cout << "Symbolic Sum: " << r << endl;

    return 0;
}
