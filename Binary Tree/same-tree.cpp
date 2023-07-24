class Solution {
public:
 bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == 0 || q == 0) return (p == 0 && q == 0);
        if (p->val == q->val) return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        return false;
    }
};
