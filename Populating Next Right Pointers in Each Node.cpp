/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
     if(root==nullptr)
     {
      return;   
     }
     while(root->left)
     {
         TreeLinkNode *p=root;
         while(p)
         {
             p->left->next=p->right;
             if(p->next)
             {
                 p->right->next=p->next->left;
             }
             p=p->next;
         }
         root=root->left;
     }
    
    }
};
