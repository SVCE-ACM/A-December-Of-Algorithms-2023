#include <iostream>
#include <string.h>
using namespace std;


void find_path(int n){
    int sqr[n][n];
    memset(sqr, 0, sizeof(sqr));
    int i = n/2;
    int j = n-1;

    for(int num = 1; num <= n*n;){
        if(i == -1 && j == n){
            i = 0;
            j = n-2;
        }
        else{
            if(j == n)
                j = 0;
            if(i < 0)
                i = n-1;
        }
        if(sqr[i][j]){
            i += 1;
            j -= 2;
            continue;
        }
        else{
            sqr[i][j] = num++;
        }
        i--;
        j++; 
    }

    for (i = 0; i<n; i++){
        for(j = 0;j<n; j++){
            cout << sqr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    find_path(n);
    return 0;
}
