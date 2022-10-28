
199 - Binary Tree Right Side View

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
    
    void rightv(TreeNode* root , vector<int>&ans,int level){
        if(root==NULL)return;
        cout<<level<<ans.size()<<endl;
    if(ans.size()<level)ans.push_back(root->val);
    
    rightv(root->right,ans,level+1);
    rightv(root->left,ans,level+1); 
  
    cout<<1;
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
    vector<int> v;
        rightv(root,v,1);
        return v;
        
        
        
        
    }
};