#include <bits/stdc++.h>
using namespace std;

int tour(vector<vector<int>> p,int n)
    {
        int prev_petrol = 0, curr_petrol = 0, start = 0;
        for(int i=0; i<n; i++) {
            curr_petrol+= p[i][0]-p[i][1];
            if(curr_petrol<0) {
                prev_petrol+=curr_petrol;
                curr_petrol = 0;
                start = i+1;
            }
        }
        return prev_petrol+curr_petrol>0?start+1:-1;
    }

int main()
{
    int n;
    cout << "Enter the No. of petrol pump: ";
    cin>>n;
    vector<vector<int>> p (n, vector<int>(n, 0));
    cout << "Enter the petrol: ";
    for(int i=0;i<n;i++){
        cin>>p[i][0];
    }
    cout << "Enter the distance: ";
    for(int i=0;i<n;i++){
        cin>>p[i][1];
    }
    cout<<tour(p,n)<<endl;
    return 0;
}
