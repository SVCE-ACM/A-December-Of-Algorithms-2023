#include <iostream>
#include <stack>
#include <string>
using namespace std;

int symbolicSum(const string& sequence) {
    stack<pair<long long, int>> stk; // Pair: value, multiplier

    int multiplier = 1;
    long long sum = 0;

    for (char ch : sequence) {
        if (isdigit(ch)) {
            sum += ch - '0'; // Accumulate the digit as part of the current sum
        } else if (ch == 'X') {
            stk.push({sum, multiplier}); // Push the current sum and multiplier onto the stack
            sum = 0;
            multiplier = 1;
        } else if (ch == ' ') {
            continue; // Ignore spaces
        } else { // It's a multiplier
            multiplier = ch - '0'; // Update the multiplier
        }
    }

    long long symbolicSum = 0;

    while (!stk.empty()) {
        auto top = stk.top();
        stk.pop();

        symbolicSum += top.first * top.second; // Calculate the symbolic sum
    }

    return symbolicSum;
}

int main() {
    string sequence = "1 X 2 X 3 X2";

    int result = symbolicSum(sequence);
    cout << "Symbolic Sum: " << result << endl;

    return 0;
}
