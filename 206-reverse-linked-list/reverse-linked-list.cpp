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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *ptr = head;
        ListNode *front;
        ListNode *pre = NULL;
        while(ptr!=NULL)
        {
            front = ptr->next;
            ptr->next = pre;
            pre = ptr;
            ptr = front; 
        }
        return pre;
    }
};