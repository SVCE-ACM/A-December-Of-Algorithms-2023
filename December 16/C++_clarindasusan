#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid( n , vector<int> (m, 0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int k;
            cin >> k;
            grid[i][j] = k;
        }
    }
    int t = -1;
    queue<pair<int,int>> q;
        int z = 0, h = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    q.push({i,j});
                    z++;
                    grid[i][j] = -1;
                }
                else if(grid[i][j] == 0) h++;
            }
        }
        if(h == 0) cout << 0;
        else if(h!=0 && z == 0) cout << -1;
        int rl = 0;
        while(!q.empty()){
            t++;
            int size = q.size();
            for(int p =0; p<size; p++){
                int i = q.front().first;
                int j = q.front().second;
                //up
                if(i-1>=0 && grid[i-1][j]==0){
                    q.push({i-1, j});
                    rl++;
                    grid[i-1][j] = -1;
                }
                //down
                if(i+1<n && grid[i+1][j] == 0){
                    q.push({i+1, j});
                    rl++;
                    grid[i+1][j] = -1;
                }
                //left
                if(j-1>=0 && grid[i][j-1] == 0){
                    q.push({i, j-1});
                    rl++;
                    grid[i][j-1] = -1;
                }
                //right
                if(j+1<m && grid[i][j+1] == 0){
                    q.push({i, j+1});
                    rl++;
                    grid[i][j+1] = -1;
                }
                q.pop();
            }
        }
        if(h != rl) cout << -1;
    cout << t;
    return 0;
} 
