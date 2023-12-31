#include <bits/stdc++.h>

using namespace std;

class i {
    
    public:
    int k,r,m,n;
    i(int k, int r, int m, int n) {
        this->k=k;
        this->r=r;
        this->m=m;
        this->n=n;
    }
};

class c {
    
    public:
    int k, r;
    c(int k, int r) {
        this->k=k;
        this->r=r;
    }
};

int main() {
    freopen("C:/Users/karth/OneDrive/Desktop/December of Algorithms/A-December-Of-Algorithms-2023/input.txt", "r", stdin);
    freopen("C:/Users/karth/OneDrive/Desktop/December of Algorithms/A-December-Of-Algorithms-2023/output.txt", "w", stdout);
    int x = 3;
    int z = 3;
    i items[] = {
        i(10,100,5,110),
        i(9,200,2,200),
        i(20,200,30,300)
    };
    // i items[] = {
    //     i(8, 150, 10, 160),  
   	//     i(5, 180, 12, 200),  
   	//     i(20, 250, 15, 300),  
   	//     i(15, 300, 18, 250),  

    // };
    c clients[] = {
        c(5,100),
        c(9,500),
        c(20,400)
    };
    // c clients[] = {
    //     c(6, 200), 
  	//     c(14, 280),   
  	//     c(8, 220), 
  	//     c(25, 350)
    // };
    // for(i item :items) {
    //     cout<< item.m << " ";
    // }
    // cout << endl;
    sort(items, items+x, [&](i& i1, i& i2) {
        return i1.m < i2.m;
    });
    sort(clients, clients+z, [&](c& c1, c& c2) {
        return c1.k > c2.k;
    });
    vector<bool> sold(x,false);
    int count = 0;
    for(c client: clients) {

        for (int i = 0; i < x; i++)
        {
            if(!sold[i] && items[i].m >= client.k && items[i].n <= client.r) {
                sold[i] = true;
                count++;
                break;
            }
        }
        
    }
    cout << count << endl;
    // for(i item :items) {
    //     cout<< item.m << " ";
    // }
    // cout << endl;
    return 0;
}