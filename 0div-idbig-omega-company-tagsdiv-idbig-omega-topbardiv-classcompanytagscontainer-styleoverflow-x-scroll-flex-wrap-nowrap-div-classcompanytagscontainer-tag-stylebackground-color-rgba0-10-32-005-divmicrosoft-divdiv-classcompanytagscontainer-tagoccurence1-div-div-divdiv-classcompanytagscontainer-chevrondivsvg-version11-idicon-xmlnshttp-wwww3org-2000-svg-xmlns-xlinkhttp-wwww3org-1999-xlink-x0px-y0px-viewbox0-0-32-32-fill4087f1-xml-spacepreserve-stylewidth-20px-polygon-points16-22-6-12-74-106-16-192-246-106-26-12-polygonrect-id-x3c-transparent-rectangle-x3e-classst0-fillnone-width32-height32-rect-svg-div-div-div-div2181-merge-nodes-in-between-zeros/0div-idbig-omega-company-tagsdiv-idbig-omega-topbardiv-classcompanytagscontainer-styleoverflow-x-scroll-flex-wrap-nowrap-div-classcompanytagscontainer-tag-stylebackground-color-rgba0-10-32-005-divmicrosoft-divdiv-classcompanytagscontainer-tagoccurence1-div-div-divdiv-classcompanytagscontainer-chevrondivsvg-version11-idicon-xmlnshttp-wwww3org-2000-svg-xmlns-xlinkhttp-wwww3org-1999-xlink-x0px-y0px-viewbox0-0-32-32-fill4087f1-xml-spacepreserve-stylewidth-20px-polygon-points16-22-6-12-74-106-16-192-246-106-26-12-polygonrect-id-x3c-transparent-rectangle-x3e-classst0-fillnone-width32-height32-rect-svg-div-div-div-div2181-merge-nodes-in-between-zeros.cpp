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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans = new ListNode(0);
        ListNode* tail = ans;
        ListNode* temp = head->next;
        int num = 0;
        while(temp!=NULL){
            if(temp->val!=0){
                num+=temp->val;
            }
            else if(temp->val==0){
                ListNode* l = new ListNode(num);
                tail->next = l;
                tail=tail->next;
                num=0;
            }
            temp = temp->next;
        }
        
       return ans->next; 
    }
};