#include <bits/stdc++.h>
using namespace std;

int find(vector<int>&nums)
{
    int sum=0, res=0;
    for(int i=0; i<nums.size(); i++)
    {
        sum+=nums[i];
    }
    int avg=sum/nums.size();
    
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]>=avg)
        {
            res+=nums[i];
        }
    }

    return res;
}

int main()
{
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        nums.push_back(a);
    }
    
    cout<<find(nums);
    
    return 0;
    
}
