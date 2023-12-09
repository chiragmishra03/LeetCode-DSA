class Solution {
public:
    ListNode* middleofLinkedList(ListNode* head) {
	ListNode* fast = head;
	ListNode* slow = head;
	while (fast->next != nullptr and fast->next->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
    ListNode* mergeTwoSortedList(ListNode* &list1, ListNode* &list2) {
	if (list1 == NULL) {return list2;}
	if (list2 == NULL) {return list1;}
	ListNode* temp = new ListNode(0);
	ListNode* l1 = list1;
	ListNode* l2 = list2;
	ListNode* curr = temp;
	while (l1 != NULL && l2 != NULL) {
		if (l1->val <= l2->val) {
			curr->next = l1;
			l1 = l1->next;
		}
		else {
			curr->next = l2;
			l2 = l2->next;
		}
		curr = curr->next;
	}

	if (l1 == NULL) {
		curr->next = l2;
	}
	else {
		curr->next = l1;
	}
	return temp->next;
}
    ListNode* mergesortList(ListNode* &s) {
	if (s==NULL || s->next == NULL)return s;
	ListNode* mid = middleofLinkedList(s);
	ListNode* temp = mid->next;
	mid->next = NULL;
	mergesortList(s);
	mergesortList(temp);
	return s = mergeTwoSortedList(s, temp);
}
    ListNode* sortList(ListNode* head) {
        return mergesortList(head);
    }
};