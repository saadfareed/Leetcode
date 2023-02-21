/*Finding largest value in each level of a BST*/

// class Solution{
//     public:
//     vector<int>largestvalueineachlevel(TreeNode*root){
//         if(root == NULL)
//             return {};
//         vector<int>max_vals;
//         int size;
//         int max;
//         TreeNode*temp;
//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty()){
//             size = q.size();
//             max = INT_MIN;
//             while(size--){
//                 temp = q.front();
//                 q.pop();
//                 max = max(max, temp->val);
//                 if(temp->left)
//                     q.push(temp->left);
//                 if(temp->right){
//                     q.push(temp->right);
//                 }
//             max_vals.push_back(max);
//             }
//         }
//         return max_vals;

//     }

// };