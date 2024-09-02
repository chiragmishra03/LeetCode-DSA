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
    
  ListNode* reversek(ListNode* head, int k) {
    int count = 0;
    ListNode* current = head;
    ListNode* prev = nullptr;
    ListNode* forward = nullptr;
    ListNode* temp = head;
    for (int i = 0; i < k; ++i) {
        if (!temp) return head; 
        temp = temp->next;
    }
    while (count < k and current!=NULL) {
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
        count++;
    }
    if (forward != nullptr) {
        head->next = reversek(forward, k);
    }
    return prev;
}
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * prev = NULL;
        head = reversek(head,k);
        return head;
    }
};