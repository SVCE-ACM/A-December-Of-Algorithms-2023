#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int t = -1;
    queue<pair<int,int>> q;
    int r = 0, f = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == 2){
                q.push({i,j});
                r++;
                grid[i][j] = -1;
            }
            else if(grid[i][j] == 1) f++;
        }
    }
    if(f == 0) return 0;
    else if(f!=0 && r == 0) return -1;
    int rl = 0;
    while(!q.empty()){
        t++;
        int size = q.size();
        for(int p =0; p<size; p++){
            int i = q.front().first;
            int j = q.front().second;
            //up
            if(i-1>=0 && grid[i-1][j]==1){
                q.push({i-1, j});
                rl++;
                grid[i-1][j] = -1;
            }
            //down
            if(i+1<n && grid[i+1][j] == 1){
                q.push({i+1, j});
                rl++;
                grid[i+1][j] = -1;
            }
            //left
            if(j-1>=0 && grid[i][j-1] == 1){
                q.push({i, j-1});
                rl++;
                grid[i][j-1] = -1;
            }
            //right
            if(j+1<m && grid[i][j+1] == 1){
                q.push({i, j+1});
                rl++;
                grid[i][j+1] = -1;
            }
            q.pop();
        }
    }
    if(f != rl) return -1;
    return t;
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>>grid(n, vector<int>(m, -1));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> grid[i][j];
		}
	}
	int ans = orangesRotting(grid);
	cout << ans << "\n";
	return 0;
}
