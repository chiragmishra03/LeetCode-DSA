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
    int length(ListNode* head) {
    ListNode* temp = head;
    if (head == nullptr) {
        return 0;
    }
    int len = 1;
    while (temp->next) {
        len++;
        temp = temp->next;
    }
    return len;
}
    
    
    ListNode* reverse(ListNode* head, ListNode*& prev) {
    if (head == nullptr) {
        return prev;
    }
    ListNode* current = head;
    ListNode* forward = current->next;
    current->next = prev;
    prev = current;
    return reverse(forward, prev);
}
    
    
    ListNode* rotateRight(ListNode* head, int k) {
    int len = length(head);
    if (len == 0) {
        return head;
    }
    k = k % len;
    if (k == 0) {
        return head;
    }
    ListNode* prev = nullptr;
    head = reverse(head, prev);
        
        
    ListNode* temp = head;
    cout<<k<<endl;
    k = k-1;
    while (k--) {
        temp = temp->next;
    }
    ListNode* rem = temp->next;
    temp->next = nullptr;
    prev = nullptr;
    temp = reverse(head, prev);
    prev = nullptr;
    rem = reverse(rem, prev);
    head = temp;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = rem;
    return head;
    }
};