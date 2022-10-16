/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        if (root == NULL)
            return {};
        vector<vector<int>> ans;
        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            int size = q.size();
            vector<int> v;
            while (size--)
            {
                Node *temp = q.front();
                q.pop();
                v.push_back(temp->val);

                for (int i = 0; i < temp->children.size(); i++)
                {
                    q.push(temp->children[i]);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};
