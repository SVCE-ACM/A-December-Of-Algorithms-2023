#include <iostream>
#include <vector>

using namespace std;

// Function to find the starting point to complete the circular route
int findStartingPoint(vector<int>& petrol, vector<int>& distance) {
    int n = petrol.size();
    int start = 0, currPetrol = 0, totalPetrol = 0;

    for (int i = 0; i < n; ++i) {
        totalPetrol += petrol[i] - distance[i];
        currPetrol += petrol[i] - distance[i];

        if (currPetrol < 0) {
            currPetrol = 0;
            start = i + 1; // Update the potential starting point
        }
    }

    return (totalPetrol >= 0) ? start : -1; // If the total petrol is enough to complete the circle, return the starting point
}

int main() {
    int n;
    cout << "Enter the number of petrol pumps: ";
    cin >> n;

    vector<int> petrol(n);
    vector<int> distance(n);

    cout << "Enter the petrol reserves at each petrol pump:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> petrol[i];
    }

    cout << "Enter the distance to the next petrol pump from each pump:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> distance[i];
    }

    int start = findStartingPoint(petrol, distance);

    if (start == -1) {
        cout << "It's impossible to complete the circular route without running out of fuel." << endl;
    } else {
        cout << "Start at petrol pump " << start + 1 << " to complete the circular route without running out of fuel." << endl;
    }

    return 0;
}
