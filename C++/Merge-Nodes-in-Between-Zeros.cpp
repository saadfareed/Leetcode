/*
 * Name: Abdul Ali Khan
 * Username: abdulalikhan
 * Problem No. 2181
 * Merge Nodes in Between Zeros
*/
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* headNew = new ListNode(); 
        ListNode* temp2 = headNew;
        int sum = 0;
        bool firstZero = false;
        while (temp != NULL){
            if (!firstZero && temp->val == 0)
                firstZero = true;
            else if (firstZero && temp->val != 0)
                sum += temp->val;
            else if (firstZero && temp->val == 0 && sum == 0)
                sum += temp->val;
            else if (firstZero && temp->val == 0 && sum > 0){
                if (temp2->val == 0)
                    temp2->val = sum;
                else{
                    ListNode* newNode = new ListNode(sum);
                    temp2->next = newNode;
                    temp2 = temp2->next;
                }
                sum = 0;
            }
            temp = temp->next;
        }
        if (sum > 0){
            ListNode* newNode = new ListNode(sum);
            temp2->next = newNode;
        }
        return headNew;
    }
};