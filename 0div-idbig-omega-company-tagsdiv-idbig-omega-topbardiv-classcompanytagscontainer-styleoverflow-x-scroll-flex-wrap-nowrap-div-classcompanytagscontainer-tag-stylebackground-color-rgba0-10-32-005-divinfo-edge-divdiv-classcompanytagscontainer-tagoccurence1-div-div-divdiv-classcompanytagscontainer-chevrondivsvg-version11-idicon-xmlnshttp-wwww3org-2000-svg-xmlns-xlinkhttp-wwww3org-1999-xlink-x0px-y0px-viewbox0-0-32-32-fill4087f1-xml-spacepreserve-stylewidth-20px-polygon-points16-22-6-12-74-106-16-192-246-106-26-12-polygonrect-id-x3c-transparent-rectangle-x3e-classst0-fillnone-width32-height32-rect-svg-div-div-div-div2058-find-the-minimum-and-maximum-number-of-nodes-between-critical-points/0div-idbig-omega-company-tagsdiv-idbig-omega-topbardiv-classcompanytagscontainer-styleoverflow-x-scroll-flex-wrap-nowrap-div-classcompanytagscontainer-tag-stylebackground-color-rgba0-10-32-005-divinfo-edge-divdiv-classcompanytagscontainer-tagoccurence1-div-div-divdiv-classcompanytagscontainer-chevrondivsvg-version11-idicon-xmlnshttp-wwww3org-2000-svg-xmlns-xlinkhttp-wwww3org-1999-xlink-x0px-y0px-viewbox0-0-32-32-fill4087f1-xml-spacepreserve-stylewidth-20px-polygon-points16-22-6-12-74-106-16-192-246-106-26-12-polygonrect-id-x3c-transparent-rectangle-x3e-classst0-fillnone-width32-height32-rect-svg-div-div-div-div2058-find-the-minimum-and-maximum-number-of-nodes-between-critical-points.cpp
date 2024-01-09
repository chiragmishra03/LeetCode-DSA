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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* p = head;
        ListNode* c = head->next;
        if(!head->next->next)return {-1,-1};
        ListNode* n = head->next->next;
        int count=0;
        int first = -1;
        int last = -1;
        int sl=-1;
        int i = 2;
        int maxdistance= INT_MIN;
        int mindistance = INT_MAX;
        while(n!=NULL)
        {
            if((p->val > c->val) and (n->val > c->val) or (p->val < c->val) and (n->val < c->val))
            {
                count++;
                if(count==1){first = i;last=i;}
                else{
                mindistance = min ({i-last,mindistance});
                last = i ;
                }
               cout<<first<<endl;
               cout<<last<<endl;
                
            }
            i++;
            n=n->next;
            p=p->next;
            c=c->next;
        }
        
        cout<<first<<endl;
        cout<<last<<endl;
        if(count<2)return {-1,-1};
        return {mindistance , last-first};
    }
};