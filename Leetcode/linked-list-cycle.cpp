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
    const int iMax = 1e4;
    bool hasCycle(ListNode *head) {
        int i = 0;
        while(i<= iMax) {
            if(head == NULL) return false;
            head = head->next;
            i++;
        }
        return true;
    }
};