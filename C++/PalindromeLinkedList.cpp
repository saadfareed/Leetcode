/*
Name: Muhammad Khuzaima Umair

Username: mkhuzaima

Approach: Convert the LinkedList to the array, and then check whether the array is palindrome or not
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
    bool isPalindrome(ListNode* head) {
        int size = 0;
        ListNode *node = head;
        while (node != NULL) {
            size++;
            node = node->next;
        }

        
        
        // create an array of size
        int array[size];
        
        // copy list to array
        for(int i = 0; i < size; i++){
            array[i] = head->val;
            head = head->next;
        }
        
        int half = size/2;
        // check for palindrome 
        for(int i = 0; i< half; i++){
            if (array[i] != array[size-1-i]){
                return false;
            }
        }
        
        return true;
    }
};