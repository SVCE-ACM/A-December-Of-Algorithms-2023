#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<accumulate(arr.begin(),arr.end(),0)<<endl; //the third argument provides the initial sum
    cout<<(max_element(arr.begin(),arr.end()) - arr.begin())<<endl; //max_element returns an iterator pointing to the maximum element.
    //By subtracting with the first element iterator we get the index.
    return 0;
}