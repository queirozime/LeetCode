class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* newRoot = NULL;
        if(root1 == NULL && root2 == NULL) return NULL;
        if(root1 == NULL || root2 == NULL) {
            if(root1 == NULL) {
                newRoot = root2;
                newRoot->left = mergeTrees(NULL, root2->left);
                newRoot->right = mergeTrees(NULL,root2->right);
            }
            else {
                newRoot = root1;
                newRoot->left = mergeTrees(root1->left, NULL);
                newRoot->right = mergeTrees(root1->right,NULL);
            } 
            
        }else {
            newRoot = new TreeNode((root1->val)+(root2->val));
            newRoot->left = mergeTrees(root1->left, root2->left);
            newRoot->right = mergeTrees(root1->right,root2->right);
        }
        
        
        return newRoot;
    }
};
