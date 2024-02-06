#include <iostream>
#include <stack>
#include <string>
using namespace std;

int symbolicSum(const string& sequence) {
    stack<pair<long long, int>> stk; 

    int multiplier = 1;
    long long sum = 0;

    for (char ch : sequence) {
        if (isdigit(ch)) {
            sum += ch - '0';
        } else if (ch == 'X') {
            stk.push({sum, multiplier});
            sum = 0;
            multiplier = 1;
        } else if (ch == ' ') {
            continue;
        } else { 
            multiplier = ch - '0';
        }
    }

    long long symbolicSum = 0;

    while (!stk.empty()) {
        auto top = stk.top();
        stk.pop();

        symbolicSum += top.first * top.second;
    }

    return symbolicSum;
}

int main() {
    string sequence = "1 X 2 X 3 X2";

    int result = symbolicSum(sequence);
    cout << result << endl;

    return 0;
}