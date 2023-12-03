#include <bits/stdc++.h>
using namespace std;

vector<int> choice(vector<int> arr)
{
    vector<int> ans;
    
    unordered_map<int, int>mpp;

    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    
    
    for(int i=0; i<arr.size(); i++)
    {
        if(mpp[arr[i]]!=0)
        {
            ans.push_back(mpp[arr[i]]);
        }
        mpp[arr[i]]=0;
        
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    vector<int> result = choice(arr);

    cout << "Frequency of elements are: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
