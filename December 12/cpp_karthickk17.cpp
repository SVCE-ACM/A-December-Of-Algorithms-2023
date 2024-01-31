#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool binarySearch(vector<string> box, string target) {
    int low = 0;
    int high = box.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (box[mid] == target) {
            return true;  // Gold found in this box
        } else if (box[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;  // Gold not found in this box
}

string findGoldBox(vector<vector<string>> boxes) {
    for (auto box = boxes.begin(); box != boxes.end(); box++) {
        sort(box->begin(), box->end()); //Sorting the items based on the alphabetical order.
        if (binarySearch(*box, "Gold")) 
            return {"Box"+to_string(box-boxes.begin()+1)+" contains the Gold"};//To display the position of the box
    }

    return "Gold not found in any box";  // This should not happen if the input is valid
}

int main() {

    vector<vector<string>> boxes = {
        {"Emerald", "Ruby", "Bronze", "Silver"},
        {"Gold", "Diamond", "Ruby", "Copper"},
        {"Ruby", "Platinum", "Bronze", "Silver"}
    };

    cout << findGoldBox(boxes) << endl;

    return 0;
}
