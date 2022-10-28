
/*Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val.*/

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
    ListNode* removeElements(ListNode* head, int val) {
     
        
        while(head!=NULL)
        {
            if(head->val==val)head=head->next;
            else break;
        }
         ListNode* curr= head;
         ListNode* prev= NULL;
        if(head==NULL)return head;
        while(curr!=NULL)
        {
            if(curr->val==val)
            {
                
                prev->next=curr->next; 
               curr=curr->next;
                
            }
            else{
            
            prev=curr;
            curr=curr->next;
            }
            
        }
        
        return head;
    }
};