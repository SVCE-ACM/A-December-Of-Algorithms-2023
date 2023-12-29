#include <iostream>
#include <vector>

using namespace std;

int minTimeToMakeSumsEven(vector<pair<int, int>>& dominoes) {
    int oddUpper = 0, oddLower = 0;
    int n = dominoes.size();
    
    // Counting the number of dominoes with odd upper and lower halves
    for (int i = 0; i < n; ++i) {
        if (dominoes[i].first % 2 != 0) {
            ++oddUpper;
        }
        if (dominoes[i].second % 2 != 0) {
            ++oddLower;
        }
    }
    
    // If the total count of odd upper halves and odd lower halves are both even or both odd, return the count
    if ((oddUpper % 2 == 0 && oddLower % 2 == 0) || (oddUpper % 2 != 0 && oddLower % 2 != 0)) {
        return oddUpper % 2 == 0 ? 0 : -1; // Return 0 if they are already even or -1 if both are odd
    }
    
    // Otherwise, return -1 as it's impossible to make the sums even
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of domino pieces: ";
    cin >> n;
    
    vector<pair<int, int>> dominoes(n);
    
    cout << "Enter the numbers on the upper and lower halves of each domino:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> dominoes[i].first >> dominoes[i].second;
    }
    
    int minTime = minTimeToMakeSumsEven(dominoes);
    
    if (minTime == -1) {
        cout << "It's impossible to make the sums even." << endl;
    } else {
        cout << "Minimum time required to make the sums even: " << minTime << " seconds." << endl;
    }
    
    return 0;
}
