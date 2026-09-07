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

    int lengthLL(ListNode* head) {
        ListNode* temp = head;
        int n = 0;

        while (temp != nullptr) {
            n++;
            temp = temp->next;
        }

        return n;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int m = lengthLL(head);
        int x = m - n;

        // Head ko delete karna hai
        if (x == 0) {
            head = head->next;
            return head;
        }

        ListNode* p = head;
        ListNode* t = head->next;

        int i = 1;

        while (i < x) {
            p = p->next;
            t = t->next;
            i++;
        }

        p->next = t->next;
        t->next = nullptr;

        return head;
    }
};
