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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head, *prv = head, *res=head;
        int i = 0, sz=0, elr=0;
        while(temp != NULL) {
            sz++;
            temp = temp->next;
        }
        if(sz == 1) return NULL;
        elr = (sz-n);
        if(elr == 0) {
            res = res->next;
            return res;
        }
        temp = head;
        while(temp != NULL) {
            if(i == elr) {
                head->next = temp->next;
                break;
            }
            i++;
            head = temp;
            temp = temp->next;
        }
        return res;
    }
};