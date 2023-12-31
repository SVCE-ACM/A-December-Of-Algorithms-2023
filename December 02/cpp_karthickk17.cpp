#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int,int> count;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        count[arr[i]]++;
    }
    for(int i:arr){
        if(count[i] > 0) {
            cout<<count[i]<<" "; 
            //inorder to preserve the order of appearance of elements, I have to mark the
            //visited elements by making their count as 0.
            count[i] = 0;
        }
    }
    return 0;
}