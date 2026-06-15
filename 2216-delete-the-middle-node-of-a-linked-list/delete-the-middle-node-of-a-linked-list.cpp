/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *f=head, *w = head;
        ListNode *prev=head;
        while (f != NULL) {
            f = f->next;
            if (f != NULL) {
                prev=w;
                w = w->next;
            }
            else{
                break;
            }
            f = f->next;
        }
        if(w==prev)
        {
            return NULL;
        }
        prev->next=w->next;
        w->next=NULL;
        return head;
    }
};