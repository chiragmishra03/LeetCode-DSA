/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
      ListNode* temp = node;
      ListNode* forward = node->next;
      while(forward!=NULL){
      swap(temp->val , forward->val);
      temp = forward;
      forward = forward->next;
      }
      while(node->next!=temp){
        node = node->next;
      }
      node->next = NULL;
    }
};