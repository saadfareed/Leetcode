#Name: Abdullah Yaqub
#Username: AbdullahYaqub72
#Approach: Removes the nodes where values are same through traversing linked list.

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        current_node = head
        next_node = head.next
        while next_node:
            if current_node.val == next_node.val:
                current_node.next = next_node.next
                next_node = current_node
            current_node = next_node
            next_node = next_node.next
        return head 