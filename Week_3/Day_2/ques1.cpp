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
    ListNode* mergeTwoLists(ListNode* temp1, ListNode* temp2) {
        ListNode *ans=NULL,*finall=NULL;
        while(temp1 && temp2)
        {
            if(ans==NULL) 
            {
                if(temp1->val<=temp2->val)
                {
                    ans=temp1;
                    temp1=temp1->next;
                }
                else
                {
                    ans=temp2;
                    temp2=temp2->next;
                }
                finall=ans;
            }
            else 
            {
                if(temp1->val<=temp2->val)
                {
                    ans->next=temp1;
                    temp1=temp1->next;
                }
                else
                {
                    ans->next=temp2;
                    temp2=temp2->next;
                }
                ans=ans->next;
            }
        }
        while(temp1)
        {
            if(ans==NULL) 
            {
                ans=temp1;
                temp1=temp1->next;
                finall=ans;
                continue;
            }
            ans->next=temp1;
            temp1=temp1->next;
            ans=ans->next;
        }
        while(temp2)
        {
            if(ans==NULL) 
            {
                ans=temp2;
                temp2=temp2->next;
                finall=ans;
                continue;
            }
            ans->next=temp2;
            temp2=temp2->next;
            ans=ans->next;
        }
        return finall;
    }
};