#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string inputString;
    cout<<" enter the word:";
    cin>>inputString;
    
    int n = inputString.length();
    
    vector<string>subsequences;

    for (int i = 0; i < (1 << n); i++) 
    {
       string subsequence;
       
       for (int j = 0; j < n; j++) 
       {
            if ((i & (1 << j)) > 0) 
            {
                subsequence += inputString[j];
            }
        }
        
        subsequences.push_back(subsequence);
    }
    
    // for (int i=0; i<subsequences.size(); i++ )
    // {
    //     cout << subsequences[i] << " ";
    // }
    
    set<string>st(subsequences.begin(), subsequences.end());
    
    //  for (const auto& element : st) {
    //     std::cout << element << " ";
    // }
    
    int l=st.size();
    
    cout<<l;
    
    return 0;
}
