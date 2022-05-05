class Solution {
public:
    vector <int> inorderT;
    int visited[10010];
    void inorderTraverse(TreeNode* root) {
        if(root == NULL) return;
        inorderTraverse(root->left);
        inorderT.push_back(root->val);
        inorderTraverse(root->right);
    }
    
    bool isValidBST(TreeNode* root) {
        inorderTraverse(root);
        for(int i = 0; i < inorderT.size()-1;i++) {
            if(inorderT[i] >= inorderT[i+1]) return false;
        }
        return true;
    }
};
