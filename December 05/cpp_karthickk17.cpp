#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int avg;
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    //The test cases don't provide correct answer for the given question. In the first test case
    //the average is 30 and the sum of elements greater than or equal to average are 30 40 and 50 whose sum is 120.
    avg=accumulate(arr.begin(),arr.end(),0)/n;
    sort(arr.begin(),arr.end());
    cout<<accumulate(lower_bound(arr.begin(),arr.end(),avg),arr.end(),0)<<endl;//The lower_bound() returns the iterator that
    //points to the first element greater or equal to the value provided.
    return 0;
}