// Name: Hussain Iftikhar
// Username: hussainiftikhar5242
// Approach: First store all node in vector and then sort the vector, after sorting the vector return the kth-1 index
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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> temp;
        TreeNode* node; 
        stack<TreeNode *> s1;
        s1.push(root);
        while(!s1.empty())
        {
            TreeNode * curr = s1.top();
            int val=curr->val;
            temp.push_back(val);
            s1.pop();
            if(curr->left != NULL)
                s1.push(curr->left);
            if(curr->right != NULL)
                s1.push(curr->right);
        }
        sort(temp.begin(),temp.end());
        return temp.at(k-1);
    }
};
