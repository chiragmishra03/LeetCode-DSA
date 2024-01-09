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
    
    int len(ListNode*head){
        ListNode* temp = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* kreverse(ListNode*head,int k){
        if(!head)return NULL;
        if(len(head)<k)return head;
        int count = 0;
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = curr;
        
        while(count!=k and forward){
            count++;
            forward = forward->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        head->next = kreverse(curr,k);
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        return kreverse(head,k);
    }
};