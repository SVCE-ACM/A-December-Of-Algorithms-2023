#include <bits/stdc++.h>
using namespace std;

struct Item {
    int k, r, m, n;
};

struct Client {
    int k, r;
};

bool compareItems(const Item& a, const Item& b) {
    return a.m > b.m;
}

bool compareClients(const Client& a, const Client& b) {
    return a.k < b.k; 

int maxGadgetsSold(int x, int z, vector<Item>& items, vector<Client>& clients) {
    sort(items.begin(), items.end(), compareItems);
    sort(clients.begin(), clients.end(), compareClients);

    int gadgetsSold = 0;
    vector<bool> itemSold(x, false);

    for (int i = 0; i < z; ++i) {
        for (int j = 0; j < x; ++j) {
            if (!itemSold[j] && items[j].m > clients[i].k && items[j].n <= clients[i].r) {
                itemSold[j] = true;
                gadgetsSold++;
                break;
            }
        }
    }

    return gadgetsSold;
}

int main() {
    int x, z;
    cin >> x >> z;

    vector<Item> items(x);
    vector<Client> clients(z);

    for (int i = 0; i < x; ++i) {
        cin >> items[i].k >> items[i].r >> items[i].m >> items[i].n;
    }

    for (int i = 0; i < z; ++i) {
        cin >> clients[i].k >> clients[i].r;
    }

    int result = maxGadgetsSold(x, z, items, clients);
    cout << "Output: " << result << endl;

    return 0;
}
