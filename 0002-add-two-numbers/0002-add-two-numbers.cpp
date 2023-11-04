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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *a = l1;
        ListNode *b = l2;

        ListNode *newll = new ListNode();
        ListNode *ll = newll;

        int carry = 0;
        int sum = 0;

        while( a != NULL || b != NULL || carry != 0) {
            
            sum = (a ? a->val : 0) + (b ? b->val : 0) + carry;

            carry = sum/10;
            ll->val = sum%10;

            if (a) a = a->next;
            if (b) b = b->next;

            if (a || b || carry) {
                ll->next = new ListNode();
                ll = ll->next;
            }

        }

        return newll;

    }
};