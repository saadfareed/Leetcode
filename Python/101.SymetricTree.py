class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        def isMirror(left, right):
            if left == None and right == None:
                return True
            if left == None or right == None:
                return False
            return (left.val == right.val) and isMirror(left.right, right.left) and isMirror(left.left, right.right)
        return isMirror(root, root)