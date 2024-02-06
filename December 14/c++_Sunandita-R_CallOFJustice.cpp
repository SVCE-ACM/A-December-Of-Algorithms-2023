/*
    Since the task here is only to complete the KDistanceNodes function,
    I have assumed the values of all the tree nodes to be fixed programatically
    You can change it manually in the code itself under createBinaryTree function

    _____The tree constructed is the one given in test case 1 of the question______

    INPUT FORMAT : Two space separated Integers denoting Target and K values
    Example : 7 3
*/


#include <iostream>
#include <vector>
#include <functional>

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

void KDistanceNodes(TreeNode* root, TreeNode* target, int k, std::vector<int>& result) {
    if (!root || k < 0) {
        return;
    }

    if (k == 0) {
        result.push_back(root->value);
        return;
    }

    KDistanceNodes(root->left, target, k - 1, result);
    KDistanceNodes(root->right, target, k - 1, result);
}

int findKDistanceSubtree(TreeNode* node, TreeNode* target, int k, std::vector<int>& result) {
    if (!node) {
        return -1;
    }

    if (node == target) {
        KDistanceNodes(node, nullptr, k, result);
        return 0;
    }

    int leftDistance = findKDistanceSubtree(node->left, target, k, result);
    if (leftDistance >= 0) {
        if (leftDistance + 1 == k) {
            result.push_back(node->value);
        } else {
            KDistanceNodes(node->right, nullptr, k - leftDistance - 2, result);
        }
        return leftDistance + 1;
    }

    int rightDistance = findKDistanceSubtree(node->right, target, k, result);
    if (rightDistance >= 0) {
        if (rightDistance + 1 == k) {
            result.push_back(node->value);
        } else {
            KDistanceNodes(node->left, nullptr, k - rightDistance - 2, result);
        }
        return rightDistance + 1;
    }

    return -1;
}

TreeNode* createBinaryTree() {
    TreeNode* root = new TreeNode(14);
    root->left = new TreeNode(7);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(3);
    root->left->right->left = new TreeNode(2);
    root->left->right->left->left = new TreeNode(1);
    root->left->right->left->right = new TreeNode(4);
    root->right->right = new TreeNode(30);
    return root;
}

int main() {
    int targetValue, kValue;
    std::cin >> targetValue >> kValue;

    TreeNode* treeRoot = createBinaryTree();

    TreeNode* targetNode = nullptr;
    std::function<TreeNode*(TreeNode*, int)> findTargetNode = [&](TreeNode* node, int targetValue) -> TreeNode* {
        if (!node) {
            return nullptr;
        }
        if (node->value == targetValue) {
            return node;
        }
        TreeNode* leftResult = findTargetNode(node->left, targetValue);
        return leftResult ? leftResult : findTargetNode(node->right, targetValue);
    };

    targetNode = findTargetNode(treeRoot, targetValue);

    if (targetNode) {
        std::vector<int> result;
        findKDistanceSubtree(treeRoot, targetNode, kValue, result);

        for (int val : result) {
            std::cout << val << " ";
        }
    } else {
        std::cout << "Target node not found in the binary tree.";
    }

    return 0;
}
