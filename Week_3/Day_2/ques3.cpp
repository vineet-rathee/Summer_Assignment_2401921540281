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
        ListNode* slow=head;
        ListNode* fast=head;
        stack<int> mp;
        while(fast && fast->next)
        {
            mp.push(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast) slow=slow->next;

        while(slow)
        {
            if(slow->val!=mp.top()) return false;
            mp.pop();
            slow=slow->next;
        }
        return true;
    }
};