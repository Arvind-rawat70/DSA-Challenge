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
    ListNode* sortList(ListNode* head) 
    {
        if(head==NULL || head->next == NULL)
        {
            return head;
        }
        vector<int>result;
        ListNode *temp = head;
        while(temp!=NULL)
        {
            result.push_back(temp->val);
            temp = temp->next;
        }
        sort(result.begin(), result.end());
        temp = head;
        for(int i = 0; i<result.size(); i++)
        {
            temp->val = result[i];
            temp = temp->next;
        }
        return head;
    }
};