#include<bits/stdc++.h>
using namespace std;


int main() 
{
    int n;
    cin>>n;
    
    vector<vector<int>> matrix(n, vector<int>(n,0));
    int r=0, c=(n/2), cur_num=1;
    
    while(cur_num <= n*n) 
    {
        matrix[r][c] = cur_num;
        cur_num++;
        c=(c+1)%n;
        r=r-1;
        
        if(r<0) r=n-1;
        
        if(matrix[r][c] != 0) 
        {
            c-=1;
            if(c<0) c=n-1;
            r=(r+2)%n;
        }
    }
    
    int maxDigits = to_string(n*n).length();
    
    for (vector<int> arr : matrix) 
    {
        for (int num : arr) 
        {            
            
            cout << setw(maxDigits) << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}
