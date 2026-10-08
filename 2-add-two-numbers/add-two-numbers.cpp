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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *ptr = NULL;
        ListNode *head = NULL;
        ListNode *p = l1;
        ListNode *q= l2;
        if(p==NULL && q==NULL)
        {
            return NULL;
        }
        int carry = 0;
        while(q!=NULL || p!=NULL || carry!=0)
        {
            int sum = carry;
            if(q!=NULL)
            {
                sum +=q->val;
                q = q->next;
            }
            if(p!=NULL)
            {
                sum +=p->val;
                p = p->next;
            }
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *ne = new ListNode(digit);
            if(head==NULL)
            {
                head = ne;
                ptr = ne;
            }
            else{
                ptr->next = ne;
                ptr = ptr->next;
            }
        }
        return head;
    }
};