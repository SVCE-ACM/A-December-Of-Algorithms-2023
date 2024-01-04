/*
    INPUT EXAMPLE:

Enter the number of items: 3
Enter the number of clients: 3
Enter item values (k r m n) for each item:
10 100 5 110
9 200 2 200
20 300 30 300
Enter client values (k r) for each client:
5 110
9 500
20 400

In the question they said we can choose the item only if it's performance level is greater than user given k value... But first item is satisfied when performance level m value(5) is equal to client's k value(5) in TestCase 1. 

Assuming that is not the case the output for the first test case is 1.

*/

#include <stdio.h>
#include <stdlib.h>

struct Item {
    int k;
    int r;
    int m;
    int n;
};

struct Client {
    int k;
    int r;
};

int maxGadgetsSold(int x, int z, struct Item* items, struct Client* clients) {
    for (int i = 0; i < x - 1; i++) {
        for (int j = 0; j < x - i - 1; j++) {
            if (items[j].m < items[j + 1].m) {
                struct Item temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < z - 1; i++) {
        for (int j = 0; j < z - i - 1; j++) {
            if (clients[j].k > clients[j + 1].k) {
                struct Client temp = clients[j];
                clients[j] = clients[j + 1];
                clients[j + 1] = temp;
            }
        }
    }
    int soldGadgets = 0;
    struct Item* remainingItems = (struct Item*)malloc(x * sizeof(struct Item));
    for (int i = 0; i < x; i++) {
        remainingItems[i] = items[i];
    }
    for (int i = 0; i < z; i++) {
        int desiredPerformance = clients[i].k;
        int maxPrice = clients[i].r;

        // Try to find a suitable item for the client
        for (int j = 0; j < x; j++) {
            if (remainingItems[j].m > desiredPerformance && remainingItems[j].n <= maxPrice) {
                // Item matches the client's criteria, mark as sold and break out of the loop
                soldGadgets++;
                remainingItems[j] = remainingItems[x - 1];
                x--;
                break;
            }
        }
    }

    free(remainingItems);
    return soldGadgets;
}

int main() {
    int x, z;
    printf("Enter the number of items: ");
    scanf("%d", &x);

    printf("Enter the number of clients: ");
    scanf("%d", &z);

    struct Item* items = (struct Item*)malloc(x * sizeof(struct Item));
    struct Client* clients = (struct Client*)malloc(z * sizeof(struct Client));
    printf("Enter item values (k r m n) for each item:\n");
    for (int i = 0; i < x; i++) {
        scanf("%d %d %d %d", &items[i].k, &items[i].r, &items[i].m, &items[i].n);
    }
    printf("Enter client values (k r) for each client:\n");
    for (int i = 0; i < z; i++) {
        scanf("%d %d", &clients[i].k, &clients[i].r);
    }
    int result = maxGadgetsSold(x, z, items, clients);
    printf("Result: %d\n", result);
    free(items);
    free(clients);
    return 0;
}
