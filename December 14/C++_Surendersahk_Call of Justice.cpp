#include <iostream>
#include <unordered_map>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void mapNodesToParents(TreeNode* node, std::unordered_map<TreeNode*, TreeNode*>& parents) {
    if (node == nullptr) return;

    if (node->left != nullptr)
        parents[node->left] = node;

    if (node->right != nullptr)
        parents[node->right] = node;

    mapNodesToParents(node->left, parents);
    mapNodesToParents(node->right, parents);
}

std::vector<int> findNodesAtKDistance(TreeNode* root, TreeNode* target, int k) {
    std::unordered_map<TreeNode*, TreeNode*> parents;
    mapNodesToParents(root, parents);

    std::queue<TreeNode*> q;
    std::unordered_map<TreeNode*, bool> visited;
    q.push(target);
    visited[target] = true;

    int level = 0;
    while (!q.empty()) {
        int size = q.size();
        if (level == k) {
            std::vector<int> result;
            while (!q.empty()) {
                result.push_back(q.front()->val);
                q.pop();
            }
            return result;
        }

        for (int i = 0; i < size; ++i) {
            TreeNode* curr = q.front();
            q.pop();

            if (curr->left && !visited[curr->left]) {
                q.push(curr->left);
                visited[curr->left] = true;
            }

            if (curr->right && !visited[curr->right]) {
                q.push(curr->right);
                visited[curr->right] = true;
            }

            if (parents[curr] && !visited[parents[curr]]) {
                q.push(parents[curr]);
                visited[parents[curr]] = true;
            }
        }
        ++level;
    }

    return std::vector<int>(); // If no nodes found at distance k
}

// Function to build the binary tree based on user input
TreeNode* buildTree() {
    int val;
    std::cout << "Enter root value: ";
    std::cin >> val;
    TreeNode* root = new TreeNode(val);

    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        int leftVal, rightVal;
        std::cout << "Enter left child value of " << curr->val << " (or -1 if no left child): ";
        std::cin >> leftVal;
        if (leftVal != -1) {
            curr->left = new TreeNode(leftVal);
            q.push(curr->left);
        }

        std::cout << "Enter right child value of " << curr->val << " (or -1 if no right child): ";
        std::cin >> rightVal;
        if (rightVal != -1) {
            curr->right = new TreeNode(rightVal);
            q.push(curr->right);
        }
    }

    return root;
}

int main() {
    TreeNode* root = buildTree();

    int targetVal, k;
    std::cout << "Enter target node value: ";
    std::cin >> targetVal;
    std::cout << "Enter distance k: ";
    std::cin >> k;

    // Find the target node
    TreeNode* targetNode = nullptr;
    std::queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();
        if (curr->val == targetVal) {
            targetNode = curr;
            break;
        }
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }

    if (targetNode == nullptr) {
        std::cout << "Target node not found in the tree.\n";
        return 0;
    }

    std::vector<int> nodesAtKDistance = findNodesAtKDistance(root, targetNode, k);

    // Print the nodes found at distance k from the target node
    std::cout << "Nodes at distance " << k << " from target node " << targetVal << " are: ";
    for (int nodeVal : nodesAtKDistance) {
        std::cout << nodeVal << " ";
    }
    std::cout << std::endl;

    // Free allocated memory for the tree nodes to prevent memory leaks!

    return 0;
}
