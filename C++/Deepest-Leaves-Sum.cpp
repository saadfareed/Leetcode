/**
 * Name: Abdul Ali Khan
 * Username: abdulalikhan
 * Problem No. 1302
 * Deepest Leaves Sum
 */
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
private:
    int height;
    int sum = 0;
public:
    int getHeight(TreeNode* root) {
        if (root == NULL)
            return 0;
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        return max(leftHeight, rightHeight)+1;
    }
    
    void sumCalculator(TreeNode* root, int current = 1) {
        if (root == NULL)
            return;
        if (!root->left && !root->right && height == current)
            sum += root->val;
        sumCalculator(root->left, current+1);
        sumCalculator(root->right, current+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        if (root == NULL)
            return 0;
        height = getHeight(root);
        sumCalculator(root);
        return sum;
    }
};