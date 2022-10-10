
#Name: Abdullah Yaqub
#Username: AbdullahYaqub72
#Approach: Recursively getting root node of tree at the start of traversal.
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        return_array=[]
        if root is None:
            return []
        else:
            return_array.append(root.val)
            return_array+=self.preorderTraversal(root.left)
            return_array+=self.preorderTraversal(root.right)
            
        return return_array