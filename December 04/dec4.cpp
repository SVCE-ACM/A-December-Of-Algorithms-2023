#include <bits/stdc++.h>
using namespace std;

void find(string str)
{
    unordered_map<int, string>mpp;
    int count=0;
    
    for(int i=0; i<str.size(); i++)
    {
        for(int j=i+1; j<=str.size(); j++)
        {
            string sub=str.substr(i,j-1);
            string revsub=sub;
            reverse(revsub.begin(), revsub.end());
            if(sub.size()>1 && sub==revsub)
            {
                mpp[sub.size()]=sub;
                count++;
            }
        }
    }
    int mini=INT_MAX;
    
    if(count==0)
    {
        cout<<"Error";
    }
    
    for(auto x: mpp)
    {
        if(x.first<mini)
        {
            mini=x.first;
        }
    }
    
    string res=mpp[mini];
    cout<<res;
    
    
}

int main()
{
    cout<<"enter sentence:";
    string str;
    cin>>str;
    
    find(str);
    
    return 0;
    
}
