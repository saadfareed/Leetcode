Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

 

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
    
    vector<int> inorder(TreeNode* root)
    {
        
        vector <int>v;
        if(root==NULL)return v;
        
        vector<int>left=inorder(root->left);
        v.insert(v.end(),left.begin(),left.end());
        v.push_back(root->val);
        vector<int>right=inorder(root->right);
        v.insert(v.end(),right.begin(),right.end());
        
        return v;
        
        
        
    }
    
    
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int>v=inorder(root);
        
        return v[k-1];
        
        
        
        
    }
};