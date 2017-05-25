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
    ListNode *detectCycle(ListNode *head) {
        ListNode *p=head,*p1=head,*pp=head;
        while(p1!=nullptr && p1->next!=nullptr)
        {
            p=p->next;
            p1=p1->next->next;
            if(p==p1)
             {
                   while(p!=pp)
                    {
                      p=p->next;
                      pp=pp->next;
                   } 
                   return p;
             }
        }
        return NULL;
    }
};
