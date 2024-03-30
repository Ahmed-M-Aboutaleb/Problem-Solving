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
    void reorderList(ListNode* head) {
        ListNode* res = head, *tail = NULL;
        int n = 0;
        while(res != NULL) {
            n++;
            res = res->next;
        }
        res = head;
        vector<int> mv;
        while(res != NULL) {
            mv.push_back(res->val);
            res = res->next;
        }
        vector<int> mv2(mv);
        int lastI = -1, lastI2 = n;
        for(int i = 0; i<n; i++) {
            if(i%2 == 0) {
                mv2[i] = mv[lastI+1];
                lastI++;
            } else {
                mv2[i] = mv[lastI2-1];
                lastI2--;
            }
        }
        for(int i = 0; i<n; i++) {
            head->val = mv2[i];
            head = head->next;
        }
    }
};