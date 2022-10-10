#Name: Abdullah Yaqub
#Username: AbdullahYaqub72
#Approach: Sorting List by Comparing Values of Previous and Next Nodes


# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def sortList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        start_node = head
        while start_node:
            itr = head
            while itr.next:
                if itr.val > itr.next.val: 
                    itr.val, itr.next.val = itr.next.val, itr.val
                itr = itr.next
            start_node = start_node.next
        return head
        