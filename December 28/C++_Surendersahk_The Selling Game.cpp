#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Gadget {
    int performanceLevel;
    int minPrice;
};

int maxGadgetsSold(int x, vector<Gadget>& gadgets, int z, vector<pair<int, int>>& clients) {
    int soldCount = 0;
    vector<bool> sold(x, false);

    // Sort gadgets based on performance level in non-decreasing order
    sort(gadgets.begin(), gadgets.end(), [](const Gadget& a, const Gadget& b) {
        return a.performanceLevel < b.performanceLevel;
    });

    // Sort clients based on their performance level requirement in non-increasing order
    sort(clients.begin(), clients.end(), greater<pair<int, int>>());

    for (auto& client : clients) {
        int requiredPerformance = client.first;
        int maxPrice = client.second;

        for (int i = 0; i < x; ++i) {
            if (!sold[i] && gadgets[i].performanceLevel > requiredPerformance && gadgets[i].minPrice <= maxPrice) {
                sold[i] = true;
                ++soldCount;
                break; // Move to the next client
            }
        }
    }

    return soldCount;
}

int main() {
    int x; // Number of unsold items
    cout << "Enter the number of unsold items: ";
    cin >> x;

    vector<Gadget> gadgets(x);
    cout << "Enter performance level and minimum price for each item:" << endl;
    for (int i = 0; i < x; ++i) {
        cin >> gadgets[i].performanceLevel >> gadgets[i].minPrice;
    }

    int z; // Number of interested clients
    cout << "Enter the number of interested clients: ";
    cin >> z;

    vector<pair<int, int>> clients(z);
    cout << "Enter performance level requirement and maximum price for each client:" << endl;
    for (int i = 0; i < z; ++i) {
        cin >> clients[i].first >> clients[i].second;
    }

    int maxSold = maxGadgetsSold(x, gadgets, z, clients);
    cout << "Maximum number of gadgets that can be sold: " << maxSold << endl;

    return 0;
}
