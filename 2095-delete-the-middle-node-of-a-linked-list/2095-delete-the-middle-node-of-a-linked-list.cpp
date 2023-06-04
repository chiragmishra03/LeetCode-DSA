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
    ListNode* deleteMiddle(ListNode* head) {
        vector<ListNode*> vec;
        ListNode* temp = head;
        while(temp){
            vec.emplace_back(temp);
            temp=temp->next;}
            
        int n=vec.size();
        if(n==1) return NULL;

        else if(n==2){
            vec[n-2]->next=NULL;
            return head;}

        else 
            vec[n/2-1]->next=vec[(n/2)+1];
            return head;
    }
};