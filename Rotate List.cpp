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
        if(head==NULL || head->next==NULL || k==0)
        {
            return head;
        }
        int cnt=1;
        ListNode* crr=head;
        while(crr->next!=NULL)
        {
            crr=crr->next;
            cnt++;
        }
        if(cnt<=k)
        {
            k=k%cnt;
            if(k==0)
            {
                return head;
            }
        }
        ListNode *lth=crr;
        int lst=cnt-k;
        crr=head;
        int i=1;
        while(i<lst)
        {
            crr=crr->next;
            i++;
        }
        ListNode* kth=crr->next;
        lth->next=head;
       // head->next=kth->next;
        crr->next=NULL;
        return kth;
    }
};
