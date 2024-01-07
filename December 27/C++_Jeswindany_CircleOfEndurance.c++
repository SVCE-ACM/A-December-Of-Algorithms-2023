#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "N = ";
    cin >> n;
    int petrol[n];
    cout << "Petrol = ";
    for (int i = 0; i < n; i++)
        cin >> petrol[i];
    int distance[n];
    cout << "Distance = ";
    for (int i = 0; i < n; i++)
        cin >> distance[i];
    for (int i = 0; i < n; i++){
        if(petrol[i] >= distance[i]){
            int pos = i, tank = petrol[i]-distance[i];
            pos = (pos+1)%n;
            while(pos != i){
                tank += petrol[pos];
                if (distance[pos] > tank){
                    break;
                }
                tank -= distance[pos];
                pos = (pos+1)%n;
            }
            if (pos == i){
                cout << i+1;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}