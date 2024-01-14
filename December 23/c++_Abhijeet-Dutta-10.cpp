#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>> vec;
    int n; 
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y; 
        cin>>x>>y;
        vec.push_back({x,y});
    }
    int s1=0,s2=0;  
    bool s(false);
    for(auto &it : vec){
        int x = it.first; 
        int y = it.second;
        if(n==1 and (x%2 + y%2 == 1)){
            cout<<-1<<endl;
            return 0;
        }
        else if((x%2 + y%2 == 1)) s = true;
        s1+= it.first;
        s2+= it.second;
    }
    if(s1%2==0 and s2%2==0) cout<<0<<endl;
    else if(s1%2==1 and s2%2==1 and s) cout<<1<<endl;
    else cout<<-1<<endl;
    return 0;
}
