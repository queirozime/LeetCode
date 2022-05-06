class Solution {
public:
    
    int bfs(TreeNode* node, int h) {
        if(!node) return h;
        if(node->left == NULL && node->right == NULL) {
            return h;
        }
        return max(bfs(node->left,h+1), bfs(node->right,h+1));
        
    }
    
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int height = 1;
        return bfs(root,height);
    }
};
