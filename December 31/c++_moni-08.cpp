#include <bits/stdc++.h>
using namespace std;

bool safe(int row,int col,vector<vector<int>> board,int n){
    int drow=row;
    int dcol=col;

    while(dcol>=0){
        if(board[drow][dcol]==1) return false;
        dcol--;
    }
    dcol=col;
       
    while(drow>=0 && dcol>=0){
        if(board[drow][dcol]==1) return false; 
        dcol--;
        drow--;
    }
    drow=row;
    dcol=col;
       
    while(drow<n && dcol>=0){
        if(board[drow][dcol]==1) return false;
        drow++;
        dcol--;
    }
    return true;
}

void solve(int col , int n , vector<vector<int>> board , vector<vector<int>> &ans){
    if(col == n){
        vector<int> temp;
        for(int col=0;col<n;col++){
            for(int row=0;row<n;row++){
                if(board[row][col]==1){
                    temp.push_back(row+1);
                }
            }
        }
        ans.push_back(temp);
        return;
    }
       
    for(int row=0;row<n;row++){
        if( safe(row,col,board,n) ){
            board[row][col]=1;
            solve(col+1,n,board,ans);
            board[row][col]=0;
        }
    }
}

vector<vector<int>> nQueen(int n){
    vector<vector<int>> ans;
    vector<vector<int>> board(n,vector<int>(n,0));
    solve(0,n,board,ans);
    return ans;
}

int main(){
    int n;
    cin>>n;
        
    vector<vector<int>> ans = nQueen(n);
    if(ans.size() == 0)
        cout<<-1<<"\n";
    else {
        for(int i = 0;i < ans.size();i++){
            for(int u = 0;u < ans[i].size();u++)
                cout<<"(" << u+1 << ", " << ans[i][u] <<") ";
            cout<<"\n";
        }
        cout<<endl;
    }
    return 0;
}
