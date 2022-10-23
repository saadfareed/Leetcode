# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        kumar=ListNode(0)
        rum=kumar
        
        car=0
        while l1 or l2 or car:
            v1=l1.val if l1 else 0
            v2=l2.val if l2 else 0
            
            val=v1+v2+car
            car=val//10
            val=val%10
            rum.next=ListNode(val)
            
            rum=rum.next
            l1=l1.next if l1 else None
            l2=l2.next if l2 else None
            
        return kumar.next
            
            
        
