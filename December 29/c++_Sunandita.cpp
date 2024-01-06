/*
        INPUT FORMAT : A line of space separated characters belonging to (n,e,w,s)

        Example : n n s s w e e w s n

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isValidWalk(const vector<char>& walk) {
    if (walk.size() != 10) {
        return false;
    }

    int nsCount = 0;
    int ewCount = 0;

    for (char direction : walk) {
        if (direction == 'n') {
            nsCount++;
        } else if (direction == 's') {
            nsCount--;
        } else if (direction == 'e') {
            ewCount++;
        } else if (direction == 'w') {
            ewCount--;
        }
    }

    return nsCount == 0 && ewCount == 0;
}

int main() {
    cout << "walk = ";
    string input;
    getline(cin, input);

    string cleanedInput;
    for (char c : input) {
        if (c == '/' && !cleanedInput.empty() && cleanedInput.back() == '/') {
            break;
        } else {
            cleanedInput += c;
        }
    }

    vector<char> directions;
    for (char c : cleanedInput) {
        if (c != ' ' && c != ',') {
            directions.push_back(c);
        }
    }

    bool result = isValidWalk(directions);

    cout << (result ? "TRUE" : "FALSE") << endl;

    return 0;
}
