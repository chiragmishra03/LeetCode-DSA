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
    private:
    int lengthh(ListNode* &head)
    {
        int count=0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = lengthh(head);
        cout<<l;
        if(n==l)
        {
            ListNode* node = head; 
            head= head->next;
            delete node;
            return head;
        }
        else if(n==1)
        {
            ListNode* temp = head;
            while(temp->next->next!=NULL)
            {
                temp = temp->next;
            }
             ListNode* t = temp;
             t = temp->next;
             temp->next = NULL;
             delete t;
             return head;
        }
        else
        {
            ListNode* temp = head;
            n = l-n;
            int i=1;
            while(i<n){temp=temp->next; i++;}
             ListNode* prev = temp;
             temp = temp->next;
             prev->next = temp->next;
             delete temp;
             return head;
        }


return head;
    }
};