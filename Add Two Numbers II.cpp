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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1;
        stack<int> s2;
        while(l1)
        {
            s1.push(l1->val);
            l1=l1->next;
        }
         while(l2)
        {
            s2.push(l2->val);
            l2=l2->next;
        }
        int s=0;
        ListNode* l=new ListNode(0);
        while(!s1.empty() || !s2.empty())
        {
            if(!s1.empty())
            {
                s+=s1.top();
                s1.pop();
            }
             if(!s2.empty())
            {
                s+=s2.top();
                s2.pop();
            }
           // int eval=
            l->val=s%10;
            ListNode* p=new ListNode(s/10);
           // p.val=sum/10;
            p->next=l;
            l=p;
            s/=10;
        }
        return l->val==0?l->next:l;
    }
};
