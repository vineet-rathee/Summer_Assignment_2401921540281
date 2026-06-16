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
    int len(ListNode* head)
    {
        ListNode *temp=head;
        int ans=0;
        while(temp)
        {
            temp=temp->next;
            ans++;
        }
        return ans;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        int m=len(head);
        int k=m-n+1;
        int curr=1;
        ListNode *pre=NULL,*temp=head;
        while(curr!=k)
        {
            pre=temp;
            temp=temp->next;
            curr++;
        }
        if(k==1) return head->next;
        else pre->next=temp->next;
        return head;
        
    }
};