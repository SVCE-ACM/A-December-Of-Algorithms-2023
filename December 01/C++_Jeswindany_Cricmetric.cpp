#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int runs[n], total = 0, highest = 0;
    for (int i = 0; i<n; i++){
        cin >> runs[i];
        total  += runs[i];
        if(runs[i]>runs[highest]){
            highest = i;
        }
    }
    cout << total << endl;
    cout << highest << endl;
}
