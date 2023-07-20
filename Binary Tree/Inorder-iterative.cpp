class Solution {
public:
    vector<int> inorderTraversal(TreeNode* curr) {
        vector <int> inorder;
        stack <TreeNode *> s;
        while(true){
            if(curr!=NULL){
                s.push(curr);
                curr=curr->left;
            }
            else{
                if(s.empty()) break;
                curr=s.top();
                inorder.push_back(curr->val);
                s.pop();
                curr=curr->right;
            }
        }
        return inorder;
        
    }
};
