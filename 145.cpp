class Solution {
public:
    
    vector<int> ans;
    
    void postTraversal(TreeNode* root) {
        if(root == NULL) return ;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        ans.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        postTraversal(root);
        return ans;
        
    }
};
