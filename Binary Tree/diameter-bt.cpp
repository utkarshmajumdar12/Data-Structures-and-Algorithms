class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int di=0;
        height(root, di);
        return di;
        
    }
    int height(TreeNode* root, int &diameter){
        if(!root) return 0;

        int lh= height(root->left, diameter);
        int rh= height(root->right, diameter);
        diameter=max(diameter, lh+rh);
        return 1+max(rh, lh);
    }
};
