/*
Name: Muhammad Khuzaima Umair

Username: mkhuzaima

Approach: Iterate through both lists and add them, similarly, like we add numbers manually
*/
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode head = new ListNode();
        ListNode node = head;
        
        int carry = 0;
        int sum = 0;
        while (l1 != null && l2 != null){
            
            sum = l1.val + l2.val + carry;
            node = node.next = new ListNode(sum % 10);
            carry = sum / 10;
            
            l1 = l1.next;
            l2 = l2.next;
        }

        // System.out.println();

        while (l1 != null){
            sum = l1.val+ carry;
            node = node.next = new ListNode(sum % 10);
            carry = sum / 10;
            l1 = l1.next;
        }

        
        while (l2 != null){
            sum = l2.val + carry;
            node = node.next = new ListNode(sum % 10);
            carry = sum / 10;
            l2 = l2.next;
        }
        if (carry != 0)
            node.next = new ListNode(carry);
        
        return head.next;

    }
}