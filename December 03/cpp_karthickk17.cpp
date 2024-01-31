#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int count = 1, max;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    
        if(i == 0)
            max = arr[i];
            //Assigning the default value of the max as the first element.
            //It can also be assigned as INT_MIN. It doesn't change the result.
        else{
            
            if(max<arr[i]){
                count++;
                max=arr[i];
            }
        }
    }
    cout<<count<<endl;
    return 0;
}