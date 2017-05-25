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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        ListNode *curr=head;
        ListNode *n1,*n2;
        ListNode *t=curr->next;
        curr->next=t->next;
        t->next=curr;
        head=t;
        while(curr->next!=NULL && curr->next->next!=NULL)
        {
            n1=curr->next;
            n2=curr->next->next;
            curr->next=n2;
            n1->next=n2->next;
            n2->next=n1;
            curr=curr->next->next;
        }
        return head;
    }
};
