#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"no of players:";
    int n;
    cin>>n;
    
    vector<int>runs;
    
    for(int i=0; i<n; i++)
    {
        int score;
        cin>>score;
        runs.push_back(score);
    }
    
    int team_score;
    
    for(int i=0; i<n; i++)
    {
        team_score+=runs[i];
    }
    
    cout<<team_score<<endl;
    
    int max_runs=*max_element(runs.begin(), runs.end());
    for(int i=0; i<max_runs; i++)
    {
        if(runs[i]==max_runs)
        {
            cout<<i<<" ";
        }
    }
    
    return 0;
}
