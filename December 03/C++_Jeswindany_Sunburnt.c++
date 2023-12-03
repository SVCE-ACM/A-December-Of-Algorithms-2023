#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int h[n];
    for(int i=0; i<n; i++){
        cin >> h[i];
    }
    int c = 0, f;
    for(int i=0; i<n; i++){
        f = 1;
        for(int j=0; j<i; j++){
            if(h[j] >= h[i]){
                f = 0;
                break;
            }
        }
        if(f == 1)
            c++;
    }
    cout << c;
}
