#include<bits/stdc++.h>
using namespace std;

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
    vector<int> nodes;
    
    void KDistanceNodesDown(Node* root, int k) {
        if (root == NULL)
            return;
        if(k == 0) {
            nodes.push_back(root->data);
            return;
        }
        KDistanceNodesDown(root->left, k-1);
        KDistanceNodesDown(root->right, k-1);
        
    }
    
    int helper(Node* root, int target, int k) {
        if(root == NULL)
            return -1;
        if(root->data == target)
        {
            KDistanceNodesDown(root, k);
            return 0;
        }
        int dl = helper(root->left, target, k);
        if (dl != -1){
            if (dl + 1 == k)
                nodes.push_back(root->data);
            else
                KDistanceNodesDown(root->right, k-dl-2);
            return 1 + dl;
        }
        int dr = helper(root->right, target, k);
        if (dr != -1){
            if (dr + 1 == k)
                nodes.push_back(root->data);
            else
                KDistanceNodesDown(root->left, k-dr-2);
            return 1 + dr;
        }
        return -1;
    }
    
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        nodes.clear();
        helper(root, target, k);
        sort(nodes.begin(), nodes.end());
        return nodes;
    }
        
};

int main()
{
    
    int t;
    cin>>t;
    getchar();
    
    Solution x = Solution();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        
        int target, k;
        cin>> target >> k;
        getchar();
        
        vector <int> res = x.KDistanceNodes(head, target, k);
        
        for( int i=0; i<res.size(); i++ )
            cout<< res[i] << " ";
        cout<<endl;
    }
    return 0;
}