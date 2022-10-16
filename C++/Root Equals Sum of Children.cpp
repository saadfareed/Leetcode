// Name:  Hussain Iftikhar
// UserName: hussainiftikhar5242
// Approach: first sum the left and right node of tree and then check the parent node is equal to the Parent node
class Solution {
public:
    bool checkTree(TreeNode* root) {
        int sum=0;
        sum  = root->left->val + root->right->val;
        if(sum == root->val)
        {
            return true;
        }
        return false;
        
    }
};
