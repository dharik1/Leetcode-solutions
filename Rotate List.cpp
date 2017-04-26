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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
        {
            return nullptr;
        }
        ListNode *cur=head;
        int cnt=1;
        while(cur->next)
        {
           cur=cur->next;
            //cur=nxt;
            cnt++;
        }
        cur->next=head;
        if(k%=cnt)
        {
            for(auto i=0;i<cnt-k;i++) cur=cur->next;
        }
        ListNode *n=cur->next;
        cur->next=nullptr;
        return n;
    }
};
