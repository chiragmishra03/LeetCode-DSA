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
     ListNode* reverse(ListNode* head , ListNode* prev) {
         if(head==NULL){
             return prev;
         }
         ListNode* current = head;
         ListNode* forward = current->next;
         current->next = prev ;
         prev = current;
         return reverse(forward , prev);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;
        return reverse(temp,prev);
    }
};