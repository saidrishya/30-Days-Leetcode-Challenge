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
    ListNode* middleNode(ListNode* head) {
       int c=0;
        ListNode *p=head ,*q=head;
        while(p)
        {
            c++;
            p=p->next;
        }
        int k=c/2;
        while(k--){
            q=q->next;
        }
return q;
        
    }
};
