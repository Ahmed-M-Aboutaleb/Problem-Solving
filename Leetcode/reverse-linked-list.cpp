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
    ListNode* reverseList(ListNode* head) {
        ListNode *parent = head;
        ListNode* prev = NULL;
        while(parent != NULL) {
            ListNode* forward = parent->next;
            parent->next = prev;
            prev = parent;
            parent = forward;
        }

        /* make parent as tail */
        
        return prev;
    }
};