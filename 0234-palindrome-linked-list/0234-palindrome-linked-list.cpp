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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* start = head;
        int len = 0;
        while(start != nullptr) {
            len++;
            start = start->next;
        }
        if (len == 1) return true;
        start = head;
        int counter = 0;
        while(counter++ < len/2) {
            st.push(start->val);
            start = start->next;
        }
        if (len%2 == 1) start = start->next;
        while(start != nullptr) {
            if (start->val == st.top()) st.pop();
            else return false;
            start = start->next;
        }
        return true;
    }
};