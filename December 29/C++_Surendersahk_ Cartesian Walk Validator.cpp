#include <iostream>
#include <vector>

using namespace std;

bool isValidWalk(vector<string>& directions) {
    if (directions.size() != 10) {
        return false; // If the walk is not exactly 10 minutes long
    }

    int x = 0, y = 0; // Starting point coordinates

    for (const string& dir : directions) {
        if (dir == "n") {
            ++y;
        } else if (dir == "s") {
            --y;
        } else if (dir == "e") {
            ++x;
        } else if (dir == "w") {
            --x;
        }
    }

    // Return true if the walk ends at the starting point (0, 0)
    return (x == 0 && y == 0);
}

int main() {
    vector<string> directions;
    char direction;
    
    cout << "Enter the directions for the walk (n/s/e/w):" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> direction;
        directions.push_back(string(1, direction));
    }

    bool isValid = isValidWalk(directions);
    
    if (isValid) {
        cout << "The walk will take exactly ten minutes and return you to your starting point." << endl;
    } else {
        cout << "The walk will not take exactly ten minutes or won't return you to your starting point." << endl;
    }

    return 0;
}
