class Solution {
public:
    vector <int> inorder;
    void traverse(TreeNode* node) {
        if(node == NULL) return;
        traverse(node->left);
        inorder.push_back(node->val);
        traverse(node->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        traverse(root);
        return inorder;
        
    }
};
