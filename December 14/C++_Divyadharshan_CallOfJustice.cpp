#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};
void findKDistanceNodes(TreeNode* root, int target, int k, vector<int>& result) {
    if (!root)
        return;

    if (k == 0) {
        result.push_back(root->value);
        return;
    }

    findKDistanceNodes(root->left, target, k - 1, result);
    findKDistanceNodes(root->right, target, k - 1, result);
}

int findTarget(TreeNode* root, int target, int k, vector<int>& result) {
    if (!root)
        return -1;

    if (root->value == target) {
        findKDistanceNodes(root, target, k, result);
        return 0;
    }

    int leftDistance = findTarget(root->left, target, k, result);
    if (leftDistance >= 0) {
        if (leftDistance + 1 == k)
            result.push_back(root->value);

        findKDistanceNodes(root->right, target, k - leftDistance - 2, result);
        return leftDistance + 1;
    }

    int rightDistance = findTarget(root->right, target, k, result);
    if (rightDistance >= 0) {
        if (rightDistance + 1 == k)
            result.push_back(root->value);

        findKDistanceNodes(root->left, target, k - rightDistance - 2, result);
        return rightDistance + 1;
    }
    return -1;
}

int main() {
    TreeNode* root = new TreeNode(17);
    root->left = new TreeNode(8);
    root->right = new TreeNode(27);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(14);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(16);
    int targetNode = 8;
    int kDistance = 2;
    vector<int> output;
    findTarget(root, targetNode, kDistance, output);
    sort(output.begin(),output.end());
    for (int node : output) {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}
