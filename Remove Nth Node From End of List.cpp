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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr && n==1)
        {
            return NULL;
        }
        int c=n;
        ListNode *p=head;
        while(n-->0)
        {
            p=p->next;
            //c++;
        }
        //cout<<p->val;
        if(p==nullptr)
        {
            return head->next;
        }
        ListNode *pp=head;
        while(p->next!=NULL)
        {
            pp=pp->next;
            p=p->next;
        }
        pp->next=pp->next->next;
        //cout<<pp->val;
        return head;
    }
};
