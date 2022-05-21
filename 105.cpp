class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty() || inorder.empty()) return NULL;
        TreeNode *root = new TreeNode(preorder[0]);
        root->val = preorder[0];
        int inorderIndexOfRoot;
        for(int i = 0;i < inorder.size(); i++) {
            if(root->val == inorder[i]) {
                inorderIndexOfRoot = i;
                cout << inorderIndexOfRoot<<endl;
                break;
            }
        }
        vector<int> newPreorder,newInorder;
        for(int i = 1; i <= inorderIndexOfRoot; i++) {
            newPreorder.push_back(preorder[i]);
        }
        for(int i = 0; i <= inorderIndexOfRoot-1; i++) {
            newInorder.push_back(inorder[i]);
        }

        root->left = buildTree(newPreorder, newInorder);
        newPreorder.clear();newInorder.clear();
        for(int i = inorderIndexOfRoot+1; i < preorder.size(); i++) {
            newPreorder.push_back(preorder[i]);
        }
        for(int i = 0; i < newPreorder.size(); i++) {
            cout << newPreorder[i] << " ";
        }
        cout << endl;
        for(int i = inorderIndexOfRoot+1; i < inorder.size(); i++) {
            newInorder.push_back(inorder[i]);
        }
        root->right = buildTree(newPreorder, newInorder);
        
        return root;
        
    }
};
