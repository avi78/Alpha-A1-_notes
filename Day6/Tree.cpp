#include <iostream>

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int val = 0, TreeNode* left = nullptr, TreeNode* right = nullptr) {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

void inorderTraversal(TreeNode* root) {
    if (root) {
        inorderTraversal(root->left);
        std::cout << root->val << " ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(TreeNode* root) {
    if (root) {
        std::cout << root->val << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(TreeNode* root) {
    if (root) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        std::cout << root->val << " ";
    }
}

int main() {
    // Create the binary tree
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->left->right->left = new TreeNode(9);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);
    root->right->right->left = new TreeNode(8);
    root->right->right->right = new TreeNode(10);

    std::cout << "In-order traversal: ";
    inorderTraversal(root);
    std::cout << std::endl;

    std::cout << "Pre-order traversal: ";
    preorderTraversal(root);
    std::cout << std::endl;

    std::cout << "Post-order traversal: ";
    postorderTraversal(root);
    std::cout << std::endl;

    // Clean up memory (optional)
    delete root;

    return 0;
}