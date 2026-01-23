#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    // LeetCode #2: add two numbers where digits are stored in reverse order
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* cur = &dummy;
        int carry = 0;
        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) { sum += l1->val; l1 = l1->next; }
            if (l2) { sum += l2->val; l2 = l2->next; }
            carry = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
        }
        return dummy.next;
    }
};

// Small test harness
int main() {
    // l1 = [2,4,3]
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    // l2 = [5,6,4]
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    Solution sol;
    ListNode* res = sol.addTwoNumbers(l1, l2);

    // Print result list
    cout << "Result: ";
    for (ListNode* p = res; p != nullptr; p = p->next) {
        cout << p->val;
        if (p->next) cout << " -> ";
    }
    cout << "\n";

    // cleanup (free allocated nodes)
    auto cleanup = [](ListNode* head) {
        while (head) {
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
        }
    };
    cleanup(l1);
    cleanup(l2);
    cleanup(res);
    return 0;
}
