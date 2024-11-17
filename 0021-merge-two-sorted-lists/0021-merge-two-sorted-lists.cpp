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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* pointer1 = list1;
        ListNode* pointer2 = list2;
        ListNode* ans = new ListNode();
        ListNode* tmp = nullptr;
        tmp = ans;
        if (!list1) return list2;
        if (!list2) return list1;
        while (pointer1 || pointer2)
        {
            if (pointer1 && pointer2)
            {
                if (pointer1->val < pointer2->val)
                {
                    ans->next = pointer1;
                    ans = ans->next;
                    pointer1 = pointer1->next;
                }
                else
                {
                    ans->next = pointer2;
                    ans = ans->next;
                    pointer2 = pointer2->next;
                }
            }
            else{
                if (!pointer1)
                {
                    ans->next = pointer2;
                    ans = ans->next;
                    pointer2 = pointer2->next;
                }
                else
                {
                    ans->next = pointer1;
                    ans = ans->next;
                    pointer1 = pointer1->next;
                }
            }
        }
        return tmp->next;
    }
};