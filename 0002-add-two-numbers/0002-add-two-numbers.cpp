
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* anslist = new ListNode(-1);
        ListNode* fin = anslist;
        ListNode* q = l1;
        ListNode* r = l2;
        int carry = 0;
        while(q && r){
        int num1 = q->val;
        int num2 = r->val;
        ListNode* node = new ListNode(0);
        if(num1+num2 < 9){
         node->val = (num1+num2+carry);
         carry=0;
        }
        else{
            node->val = (carry+num1+num2)%10;
            carry = (carry+num1+num2)/10;
        }
        anslist->next = node;
        anslist = anslist->next;
        
          q= q->next;
        r = r->next;
        }
      
      while(q){
        ListNode* node = new ListNode((q->val+carry)%10);
        carry = (q->val+carry)/10;
        anslist->next = node;
        anslist = anslist->next;
        q= q->next;
      }
      while(r){
        ListNode* node = new ListNode((r->val+carry)%10);
        carry = (r->val+carry)/10;
        anslist->next = node;
        anslist = anslist->next;
        r = r->next;
      }
      
      if(carry){
        ListNode* node = new ListNode(1);
        anslist->next=node;
        anslist= anslist->next;
      }
      return fin->next;
       
    }
};