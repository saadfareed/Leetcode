// Name: Hussain Iftikhar
// Username: hussainiftikhar5242
// Approach: Insert an element in binary tree using recursion

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node=root;
        TreeNode* temp=NULL;
        while(node != NULL)
        {
            temp=node;
            if(node->val > val)
            {
                node=node->left;
            }
            else
            {
                node=node->right;
            }
        }
        if(node == NULL)
        {
            temp->left=new TreeNode(val);
        }
        return node;
        
    }
};
