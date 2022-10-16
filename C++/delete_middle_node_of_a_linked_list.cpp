/*Name - Mayank Rastogi
  Username - mayxnk
  Approach - Using slow and fast pointer to find the middle of linked list and
             maintaing a previous pointer to delete the middle one
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head or !head->next)
            return NULL;
        ListNode* slow = head,*fast = head,*prev = NULL;
        while(slow and fast and fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(prev!=NULL)
        prev->next = slow->next;
        return head;
    }
};
          
