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
    bool hasCycle(ListNode *head) {
        if(head==nullptr)
        {
            return 0;
        }
        ListNode *p=head,*p1=head;
        while(p1!=nullptr && p1->next!=nullptr)
        {
            p=p->next;
            p1=p1->next->next;
            if(p==p1)
        {
            return 1;
        }
        }
        return 0;
    }
};
