#include <iostream>
#include <vector>
#include <string>
using namespace std;
cout<<"cpp_gowsrini2004_day_12\n"
int sum_subsequence(vector<string>& sequence, int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (isdigit(sequence[i][0])) {
            sum += stoi(sequence[i]);
        }
    }
    return sum;
}

int symbolic_sum(vector<string>& sequence) {
    int result = 0;
    int n = sequence.size();
    for (int i = 0; i < n; i++) {
        if (sequence[i][0] == 'X') {
            int multiplier = 1;
            if (sequence[i].size() > 1) {
                multiplier = stoi(sequence[i].substr(1));
            }
            int subsum = sum_subsequence(sequence, i, n - 1);
            result += multiplier * subsum;
        }
    }
    return result;
}

int main() {
    vector<string> sequence1 = {"X3", "3", "X2", "2", "X1", "1", "4"};
    int result1 = symbolic_sum(sequence1);
    cout << result1 << endl;
    
    vector<string> sequence2 = {"X2", "1", "X3", "2", "3", "X2", "4", "X1", "5"};
    int result2 = symbolic_sum(sequence2);
    cout << result2 << endl;
    return 0;
}