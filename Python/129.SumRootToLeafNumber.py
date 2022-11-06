# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        def dfs(node, current):
            if node == None:
                return 0
            current = current * 10 + node.val
            if node.left == None and node.right == None:
                return current
            return dfs(node.left, current) + dfs(node.right, current)
        return dfs(root, 0)