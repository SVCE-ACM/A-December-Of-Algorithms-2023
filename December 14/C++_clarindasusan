#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* buildTree(string str)
{   
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    Node* root = newNode(stoi(ip[0]));
        
    queue<Node*> queue;
    queue.push(root);
        
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        Node* currNode = queue.front();
        queue.pop();
            
        string currVal = ip[i];

        if(currVal != "N") {
                
            currNode->left = newNode(stoi(currVal));
                
            queue.push(currNode->left);
        }

        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
        if(currVal != "N") {
            currNode->right = newNode(stoi(currVal));
                
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

class Solution
{
private:

public:
    void solve(Node* root, Node* &tgt, unordered_map<Node*, Node*> &parent, int target){
        queue<Node*> q;
        q.push(root);
        while(q.size() > 0){
            Node* curr = q.front();
            q.pop();
            if(curr->data == target) tgt = curr;
            if(curr->left){
                parent[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right){
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }
    
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        unordered_map<Node*, Node*> parent;
        Node* tgt = NULL;
        solve(root, tgt, parent, target);
        unordered_map<Node*, bool> visited;
        visited[tgt] = true;
        int lvl = 0;
        queue<Node*> q;
        q.push(tgt);
        while(!q.empty()){
            if(lvl++ == k) break;
            int s = q.size();
            for(int i =0; i<s; i++){
                Node* curr = q.front();
                q.pop();
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right] = true;
                }
                if(parent[curr] && !visited[parent[curr]]){
                    q.push(parent[curr]);
                    visited[parent[curr]] = true;
                }
            }
        }
        vector<int> res;
        while(q.size() > 0){
            Node* curr = q.front();
            q.pop();
            res.push_back(curr->data);
        }
        sort(res.begin(), res.end());
        return res;
    }
};

int main()
{
    Solution x = Solution();
        string s;
        /*Give input as:
        17 8 27 4 14 N N N N 10 16
        8
        2
        */
        getline(cin,s);
        Node* head = buildTree(s);
        
        int target, k;
        cin>> target >> k;
        getchar();
        
        vector <int> res = x.KDistanceNodes(head, target, k);
        
        for( int i=0; i<res.size(); i++ )
            cout<< res[i] << " ";
        cout<<endl;
    return 0;
}
