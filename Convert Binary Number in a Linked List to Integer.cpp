// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer


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
    int getDecimalValue(ListNode* head) {
        int d = 0;
        ListNode* a = head;
        while(a != nullptr){
            d = d * 2 + a->val;
            a = a->next;
        }
        return d;
    }
};