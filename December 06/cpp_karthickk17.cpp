#include <bits/stdc++.h>

using namespace std;

vector<string> fin;//To store the final string array
int maxlen = 0;//To store the current maximum optimal array

void helper(int tempSize,string prev, vector<string> arr, vector<string> temp) {

    if(tempSize>maxlen){
        fin=temp;
        maxlen=tempSize;
    }
    for(size_t i=0; i < arr.size(); i++) {
        if(tempSize == 0){//It takes care of the initial cases. It ensures every string is started at least once.
            string tempStore=arr[i];
            temp.push_back(tempStore);
            arr[i]="-1";
            helper(tempSize+1,tempStore,arr,temp);
            arr[i]=tempStore;
            temp.pop_back();
            
        }
        else if(arr[i] != "-1") {
            int count = 0;
            for (int j = 0; j < prev.length(); j++) {
                if(prev[j] != arr[i][j])
                    count++;
            }
            if(count <= 1) {//If the count is 1, then the string has only one difference with the previous one
                string tempStore=arr[i];
                arr[i] = "-1";
                temp.push_back(tempStore);
                helper(tempSize+1,tempStore,arr,temp);//It uses a recursion technique to find all possible combinations
                //Can use dp to optimize this better.
                arr[i]=tempStore;
                temp.pop_back();
            }
            
        }
    }
}

int main() {
    int n;
    //cin>>n;
    n=7;
    vector<string> arr(n);
    arr={"cat", "cot", "dot", "dog", "cog", "coat", "doll"};
    // for(int i=0;i<n;i++)
    //     cin>>arr[i];
    helper(0,"",arr, {});
    if(fin.size() == 1)
        cout<<"No valid chain";
    else{
        for(string t:fin)
            cout<<t<<" ";
            cout<<endl;
    }
    return 0;
}
