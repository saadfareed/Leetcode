/*Given the head of a singly linked list, return the middle node of the linked list.If there are two middle nodes, return the second middle node.
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
    ListNode* middleNode(ListNode* head) {
    ListNode* fast;
    ListNode* tmp;
    ListNode* slow;
    fast=head;
    tmp=head;
    slow=head;
    int count=0;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        count++;
    }
    
         
    if(count%2==0)
    {
        while(fast->next->next!=tmp)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow->next;
    }
        else
        {
            while(fast->next!=tmp)
            {
                fast=fast->next->next;
                slow=slow->next;
            }
        return slow;
        }
    
    return head;
    }
};