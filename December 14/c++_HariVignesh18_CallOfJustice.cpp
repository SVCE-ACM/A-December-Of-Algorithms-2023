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

    // Recur on the left subtree
    findKDistanceNodes(root->left, target, k - 1, result);

    // Recur on the right subtree
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
    TreeNode* root = new TreeNode(14);
    root->left = new TreeNode(7);
    root->right = new TreeNode(20);
    root->right->right = new TreeNode(30);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(3);
    root->left->right->left = new TreeNode(2);
    root->left->right->left->left = new TreeNode(1);
    root->left->right->left->right = new TreeNode(4);

    int targetNode = 7;
    int kDistance = 3;

    vector<int> output;
    findTarget(root, targetNode, kDistance, output);
    sort(output.begin(),output.end());
    for (int node : output) {
        cout << " " << node;
    }
    return 0;
}
