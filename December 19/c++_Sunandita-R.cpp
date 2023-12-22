/*   Forming a right-most tree with X3 as root node  

For the Sample input 1: [X3, 3, X2, 2, X1, 1, 4]

        Constructed Tree:
0 (X3)
  3 (X1)
    0 (X2)
      2 (X1)
        0 (X1)
          1 (X1)
            4 (X1)



            First 2 Lines of output is the input and output of first test case.

            The cursor in the next line accepts user input.


            ***********         INPUT FORMAT       *********

            space separated node values without quotes (X must be in capital)

            Example :  x3 3 x2 2 x1 1 4

 */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class TreeNode {
public:
    int val;
    int multiplier;
    std::vector<TreeNode*> children;

    TreeNode(int v, int m = 1) : val(v), multiplier(m) {}
};

TreeNode* constructTree(const std::vector<std::string>& sequence) {
    std::vector<TreeNode*> stack;
    TreeNode* root = nullptr;

    for (const auto& elem : sequence) {
        TreeNode* node;
        if (elem[0] == 'X') {
            int multiplier = std::stoi(elem.substr(1));
            node = new TreeNode(0, multiplier);
        } else {
            node = new TreeNode(std::stoi(elem));
        }

        if (stack.empty()) {
            root = node;
        } else {
            TreeNode* parent = stack.back();
            parent->children.push_back(node);
        }

        stack.push_back(node);
    }

    return root;
}

int symbolicSum(TreeNode* node) {
    if (!node) {
        return 0;
    }

    int totalSum = 0;
    for (TreeNode* child : node->children) {
        totalSum += symbolicSum(child);
    }

    return node->multiplier * totalSum + (node->val ? node->val : 0);
}
int main() {
    std::vector<std::string> inputSequence = {"X3", "3", "X2", "2", "X1", "1", "4"};
    TreeNode* root = constructTree(inputSequence);

    int result = symbolicSum(root);
    std::cout << "\nSymbolic Sum: " << result << std::endl;

    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::string word;
    std::vector<std::string> inputsequence={};
    while (iss >> word) {
        inputsequence.push_back(word);
    }
    TreeNode* r = constructTree(inputsequence);
    int res = symbolicSum(r);
    std::cout<< res << std::endl;
    return 0;
}
